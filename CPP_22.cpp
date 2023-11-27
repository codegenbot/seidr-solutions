#include <vector>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b){
    // implementation of issame function
}

vector<int> filter_integers(const vector<boost::any>& values){
    vector<int> result;
    for(const auto& value : values){
        if(auto* ptr = boost::any_cast<int>(&value)){
            result.push_back(*ptr);
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