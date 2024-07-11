#include <vector>
#include <list>
#include <any>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<any> values){
    vector<int> result;
    for(auto val : values){
        if(val.type() == typeid(int)){
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

int main(){
    list<any> input_values = {any(3), any('c'), any(3), any(3), any('a'), any('b')};
    vector<int> expected_output = {3, 3, 3};
    
    vector<int> filtered_result = filter_integers(input_values);
    
    assert(filtered_result == expected_output);
    
    return 0;
}