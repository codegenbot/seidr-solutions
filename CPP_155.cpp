// add necessary includes
#include <vector>
#include <cassert>

// declare function
vector<int> even_odd_count(int num);

// function to check if two vectors are the same
bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

// implementation of even_odd_count function
vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    int digit;
    
    num = abs(num);
    
    while(num > 0){
        digit = num % 10;
        
        if(digit % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
        
        num = num / 10;
    }
    
    vector<int> result = {evenCount, oddCount};
    return result;
}