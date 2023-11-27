vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

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

#include <cassert>
#include <vector>

vector<int> filter_integers(list_any values);

int main() {
    // Test case
    list_any values = {1, 2, "hello", 3.14, 4};
    vector<int> filtered_values = filter_integers(values);
    vector<int> expected_values = {1, 2, 4};
    assert(issame(filtered_values, expected_values));
    return 0;
}