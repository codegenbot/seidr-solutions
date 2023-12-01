#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
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

int main() {
    // Test the filter_integers function
    list<boost::any> values;
    values.push_back(10);
    values.push_back(3.14);
    values.push_back("hello");
    values.push_back(20);

    vector<int> filtered = filter_integers(values);

    vector<int> expected = {10, 20};
    assert(issame(filtered, expected));

    return 0;
}