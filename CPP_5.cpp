#include <vector>
#include <cassert>

bool issame(const vector<int>& v1, const vector<int>& v2){
    if(v1.size() != v2.size()){
        return false;
    }
    for(int i=0; i<v1.size(); i++){
        if(v1[i] != v2[i]){
            return false;
        }
    }
    return true;
}

vector<int> intersperse(const vector<int>& numbers, int delimiter){ 
    vector<int> result;
    if(numbers.empty()){
        return result;
    }
    result.push_back(numbers[0]);
    for(int i=1; i<numbers.size(); i++){
        result.push_back(delimiter);
        result.push_back(numbers[i]);
    }
    return result;
}