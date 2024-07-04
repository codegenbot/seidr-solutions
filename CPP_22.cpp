#include <vector>
#include <boost/any.hpp>
#include <cassert>
#include <iostream>

using namespace std;

// Function to filter integers from a vector of boost::any
vector<int> filter_integers(const vector<boost::any>& values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

// Function to check if two vectors of integers are the same
bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    // Test case
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    cout << "Test passed!" << endl;
    return 0;
}