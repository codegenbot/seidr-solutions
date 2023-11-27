vector<int> filter_integers(list_any values){
    vector<int> result;
    for (auto value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    // rest of the code
}

#include <cassert>
#include <vector>

vector<int> filter_integers(list_any values);

int main() {
    // test cases
    assert(issame(filter_integers({1, "apple", 2.5, 3}), {1, 3}));
    assert(issame(filter_integers({"orange", 5, "banana", 4}), {5, 4}));
    assert(issame(filter_integers({}), {}));
    return 0;
}