#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    
    for(auto value : values) {
        if(typeid(value) == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    
    return result;
}

int main() {
    list<boost::any> values;
    values.push_back(1);
    values.push_back('a');
    values.push_back(2.5);
    values.push_back(3);
    values.push_back('b');
    
    vector<int> filtered_integers = filter_integers(values);
    
    vector<int> expected_result = {1, 3};
    assert(issame(filtered_integers, expected_result));
    
    return 0;
}