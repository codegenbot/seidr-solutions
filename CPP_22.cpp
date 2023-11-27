#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b) {
    // Compare the elements of a and b
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

vector<int> filter_integers(vector<boost::any> values) {
    vector<int> integers;
    for (auto value : values) {
        if (typeid(value) == typeid(int)) {
            integers.push_back(boost::any_cast<int>(value));
        }
    }
    return integers;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}