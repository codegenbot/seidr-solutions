#include <vector>
#include <boost/any.hpp>
#include <list>

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list<any> values);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto val : values){
        if (val.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

int main(){
    list<any> values = {1, 2, 3, "hello", 5.5};
    vector<int> integers = filter_integers(values);
    
    assert(issame(integers, integers));
    
    return 0;
}