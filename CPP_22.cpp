#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value, false)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    list<any> values = {3, 'c', 3, 3, 'a', 'b'};
    vector<int> filtered_values = filter_integers(values);
    assert(issame(filtered_values, vector<int>({3, 3, 3})));
    return 0;
}