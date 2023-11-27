#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> rolling_max(vector<int> numbers){
    vector<int> rollingMax;
    int currentMax = numbers[0];
    rollingMax.push_back(currentMax);
    
    for(int i = 1; i < numbers.size(); i++){
        if(numbers[i] > currentMax){
            currentMax = numbers[i];
        }
        rollingMax.push_back(currentMax);
    }
    
    return rollingMax;
}

// Remove one of the function definitions of issame
/*bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}*/