#include <vector>
#include <list>
#include <boost/any.hpp>
#include <typeinfo>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list<boost::any> values){
    vector<int> result;
    for(auto value : values){
        if(typeid(value) == typeid(int)){
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main(){
    assert(issame(filter_integers(list<boost::any>{3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
}