#include <vector>
#include <list>
#include <typeinfo>

using namespace std;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        any_cast<int>(value);
        if (typeid(int) == value.type()) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<any> input_values() {
    vector<any> values;
    int val;
    while (cin >> val) {
        values.push_back(val);
    }
    return values;
}

int main() {
    vector<any> inputs = input_values();
    assert(issame(filter_integers(inputs), {3, 3, 3}));
    return 0;
}