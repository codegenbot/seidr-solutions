#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int prod_signs(vector<int> arr){
    if(arr.empty()) return -32768;
    int sign_product = 1;
    long long sum_magnitude = 0;
    for(int i : arr){
        if(i == 0) continue;
        sign_product *= (i > 0 ? 1 : -1);
        sum_magnitude += abs(i);
    }
    return sign_product * sum_magnitude;
}