#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int i=0; i<x.size(); i++){
        int num = x[i];
        bool hasEvenDigit = false;
        while(num > 0){
            int digit = num % 10;
            if(digit % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            num /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(x[i]);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main(){
    // Example test case
    vector<int> output = unique_digits({135, 103, 31});
    assert(output == vector<int>({31, 135})); // Test if output is as expected
    
    // Add other test cases here
    
    return 0; // Optional return statement indicating successful execution
}