#include <iostream>
#include <vector>
#include <cmath>

int prod_signs(const vector<int>& arr) {
    if(arr.empty()) return -32768;
    int product = 1, sum = 0;
    for(int num : arr){
        if(num > 0) product *= 1;
        else if(num < 0) product *= -1;
        sum += abs(num);
    }
    return product * sum;
}

int main() {
    vector<int> nums = {2, -3, 4, -5};
    cout << prod_signs(nums) << endl;
    
    return 0;
}