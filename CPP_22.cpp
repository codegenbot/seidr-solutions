#include <iostream>
#include <vector>
#include <typeinfo>
#include <boost/any.hpp>
#include <cassert>

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

// Function to check if two vectors are the same
bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    vector<boost::any> mixed_values = {3, 'c', 3, 3, 'a', 'b'};
    vector<int> expected_result = {3, 3, 3};

    // Ensure filtering works correctly
    assert(issame(filter_integers(mixed_values), expected_result));

    cout << "All tests passed!" << endl;
    return 0;
}