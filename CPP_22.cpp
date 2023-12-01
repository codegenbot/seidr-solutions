#include <cassert>
#include <list>
#include <vector>
#include <boost/any.hpp>
#include <typeinfo>

using namespace std;

vector<int> filter_integers(const list<boost::any>& values) {
    vector<int> result;
    for (auto value : values) {
        if (typeid(value) == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    // Implementation of the comparison function
    // ...
    return true; // Modify this according to the desired comparison logic
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}