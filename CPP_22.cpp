#include <cassert>
#include <vector>

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> filter_integers(list_any values){
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    // Test cases
    vector<int> numbers1 = {1, 2, 3};
    vector<int> numbers2 = {1, 2, 3};
    assert(issame(numbers1, numbers2));

    list_any values = {1, 2, "hello", 3, 4, "world"};
    vector<int> integers = filter_integers(values);
    assert(integers == vector<int>({1, 2, 3, 4}));

    return 0;
}