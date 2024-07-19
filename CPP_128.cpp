#include <iostream>
#include <vector>
#include <cmath>

int prod_signs(const vector<int>& arr);
int prod_signs(const vector<int>& arr){
    if(arr.empty()) return -32768;
    
    int product = 1;
    int sum_magnitudes = 0;
    
    for(int num : arr){
        if(num > 0) product *= 1;
        else if(num < 0) product *= -1;
        
        sum_magnitudes += abs(num);
    }
    
    return product * sum_magnitudes;
}

int main() {
    vector<int> input = {3, -5, 2, -1, 4};
    int result = prod_signs(input);
    cout << result;

    return 0;
}