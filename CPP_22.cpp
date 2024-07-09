#include <vector>
#include <list>
#include <any>
#include <boost/any.hpp>

using namespace std;

bool areSame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<any> list_any(int n) {
    vector<any> values;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            values.push_back(i);
        } else {
            values.push_back(any('a' + (i / 2)));
        }
    }
    return values;
}

vector<int> filter_integers(vector<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).has_value()) {
            result.push_back(any_cast<int>(value));
        } else if (any_cast<char>(value).has_value()) {
            int num = 0;
            while (any_cast<char>(value)) {
                num++;
                any_cast<char>(value) = 'a' + num % 26;
            }
        }
    }
    return result;
}

int main() {
    assert(areSame(filter_integers(list_any(6)), vector<int>{3, 3, 3, 1, 1, 1}) );
}