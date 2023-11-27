#include <vector>
#include <boost/any.hpp>

bool issame(vector<int> a, vector<int> b){
    // implementation of issame function
}

vector<int> filter_integers(vector<boost::any> values){
    vector<int> result;
    for(auto value : values){
        if(typeid(value) == typeid(int)){
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main(){
    vector<int> filtered = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    assert(issame(filtered, {3, 3, 3}));

    // other code

    return 0;
}