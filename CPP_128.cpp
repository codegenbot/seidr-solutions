#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int signProduct = 1;
    int magnitudeSum = 0;
    
    for(int i=0; i<arr.size(); i++){
        signProduct *= (arr[i] >= 0 ? 1 : -1);
        magnitudeSum += abs(arr[i]);
    }
    
    return signProduct * magnitudeSum;
}

int main(){
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    
    return 0;
}