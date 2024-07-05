#include <iostream>
#include <vector>
#include <list>
#include <typeinfo>
#include <boost/any.hpp>
#include <cassert>

using namespace std;
using boost::any;

// Function to filter integers from a list of any type
vector<int> filter_integers(const list<any>& values) {
    vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

// Function to check if two vectors of integers are the same
bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    // Testing the function
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    cout << "Test passed!" << endl;
    return 0;
}