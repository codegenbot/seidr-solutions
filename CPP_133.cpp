#include <bits/stdc++.h>
using namespace std;

int sum_squares(vector<float> lst){
    int result = 0;
    for(float num : lst) {
        int ceil_num = ceil(num);
        result += pow(ceil_num, 2);
    }
    return result;
}

int main() {
    vector<float> nums = {1.5, 3.7, 4.9};
    cout << sum_squares(nums) << endl; 
}