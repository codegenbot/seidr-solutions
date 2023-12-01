#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int maxNum = numbers[0];
    result.push_back(maxNum);
    
    for(int i=1; i<numbers.size(); i++){
        if(numbers[i] > maxNum){
            maxNum = numbers[i];
        }
        result.push_back(maxNum);
    }
    
    return result;
}

bool areSame(vector<int> a, vector<int> b){
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

int main(){
    assert(areSame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
}