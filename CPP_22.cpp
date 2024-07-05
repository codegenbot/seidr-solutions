#include <vector>
#include <boost/any.hpp>
#include <cassert>
#include <typeinfo>

using namespace std;

// Function to filter integers from a vector of boost::any
vector<int> filter_integers(const vector<boost::any>& values) {
    vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

// Function to compare two vectors of integers
bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    // Test filter_integers and issame functions
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}