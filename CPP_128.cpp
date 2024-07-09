#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long total_sum = 0;
    
    if(arr.empty()) return -32768;
    
    for(int i : arr) {
        if(i == 0) continue; 
        sign_product *= (i > 0 ? 1 : -1);
        total_sum += abs(i);
    }
    
    return (total_sum * sign_product < 0) ? -total_sum * sign_product : total_sum * sign_product;
}