#include <vector>
#include <list>
#include <boost/any.hpp>

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    list<boost::any> values = {3, 'c', 3, 3, 'a', 'b'};
    vector<int> result = filter_integers(values);
    
    assert(issame(result, {3, 3, 3}));  
    return 0;
}