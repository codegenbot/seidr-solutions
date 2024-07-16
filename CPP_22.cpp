#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    // Check if vectors a and b are the same
    return a == b;
}

vector<int> filter_integers(std::list<boost::any> values){
    // Filter integers from a list of any type values
    vector<int> result;
    for (const auto &value : values) {
        if (auto ptr = boost::any_cast<int>(&value)) {
            result.push_back(*ptr);
        }
    }
    return result;
}

int main() {
    // Test the filter_integers function
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));

    return 0;
}