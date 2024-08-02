#include <iostream>
#include <vector>
#include <boost/any.hpp>
#include <boost/container/list.hpp>
using namespace boost;

bool issame(vector<int> a,vector<int>b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;

}

int main() {
    // Test the filter_integers function
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    
    return 0;
}