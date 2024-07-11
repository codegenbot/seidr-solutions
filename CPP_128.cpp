#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int prod_signs(vector<int> arr){
    long long res = 1;
    for(int x : arr){
        if(x > 0)res *= 1;
        else if(x < 0)res *=-1;
    }
    return (arr.empty()) ? -32768 : abs(res);
}