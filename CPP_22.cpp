#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    // implementation of issame function
}

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for(auto value : values){
        if(value.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main(){
    assert (issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    // rest of the main function code

    return 0;
}