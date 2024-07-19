#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(vector<int> a, vector<int> b); // Function declaration

vector<int> filter_integers(list<boost::any> values); // Function declaration

bool issame(vector<int> a, vector<int> b){
    // Your implementation for issame function
}

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main(){
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}