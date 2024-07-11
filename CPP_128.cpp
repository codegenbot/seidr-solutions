#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int prod_signs(vector<int> arr){
    long long product = 1;
    long long sum = 0;
    for(int num : arr){
        if(num == 0) return 0;
        int sign = (num > 0)? 1:((num < 0)? -1: 0);
        product *= sign;
        sum += abs(num);
    }
    if(arr.empty()) return -32768;
    return sum * product;
}