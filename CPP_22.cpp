#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

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

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto value : values) {
        if (typeid(value) == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    // Test the code
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 4, 5};
    vector<int> c = {1, 2, 3, 4, 6};
    
    assert(issame(a, b));
    assert(!issame(a, c));
    
    list<boost::any> values = {1, 2.5, "hello", 3, 4.2};
    vector<int> filtered = filter_integers(values);
    
    assert(filtered.size() == 2);
    assert(filtered[0] == 1);
    assert(filtered[1] == 3);
    
    return 0;
}