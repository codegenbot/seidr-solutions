#include<iostream>
#include<vector>
using namespace std;

int prod_signs(vector<int> arr){
    if(arr.empty())
        return -32768;
    
    int sign_product = 1;
    int magnitude_sum = 0;
    
    for(int i=0; i<arr.size(); i++){
        // Calculate magnitude of number
        int magnitude = abs(arr[i]);
        
        // Calculate product of signs
        sign_product *= (arr[i] >= 0) ? 1 : -1;
        
        // Calculate sum of magnitudes
        magnitude_sum += magnitude;
    }
    
    return sign_product * magnitude_sum;
}