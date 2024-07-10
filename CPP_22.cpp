#include <vector>
#include <list>
#include <boost/any.hpp>

// Define your issame function
bool issame(vector<int> a, vector<int> b) {
    // Your logic here to compare the two vectors
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

// Define your filter_integers function
vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    list<boost::any> values = {3, 'c', 3, 3, 'a', 'b'};
    vector<int> result = filter_integers(values);
    
    assert(issame(result, {3, 3, 3}));  
    return 0;
}