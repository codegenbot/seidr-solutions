#include <vector>
#include <cassert>
#include </path/to/boost/any.hpp>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
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
    vector<int> filtered = filter_integers({boost::any(3), boost::any('c'), boost::any(3), boost::any(3), boost::any('a'), boost::any('b')});
    assert(issame(filtered, {3, 3, 3}));

    // other code

    return 0;
}