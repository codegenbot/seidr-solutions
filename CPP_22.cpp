#include <vector>
#include <any>
#include <initializer_list>
#include <type_traits>
using namespace std;

bool same(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> filter_integers(const vector<any>& values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main_contest() {
    assert(same(filter_integers({3, 'c', 3, 3, 'a', 'b'}), vector<int>{3, 3, 3}));
    return 0;
}