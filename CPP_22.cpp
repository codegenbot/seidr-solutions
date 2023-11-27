#include <cassert>
#include <vector>

bool issame(vector<int> a, vector<int> b){
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
    // Test issame function
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    assert(issame(a, b));
    
    // Test filter_integers function
    list_any values = {1, "hello", 2.5, 3};
    vector<int> filtered = filter_integers(values);
    assert(filtered == vector<int>{1, 3});

    return 0;
}