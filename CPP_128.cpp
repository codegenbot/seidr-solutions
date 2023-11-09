/*
You are given a vector arr of integers and you need to return
sum of magnitudes of integers multiplied by product of all signs
of each number in the vector, represented by 1, -1 or 0.
Note: return -32768 for empty arr.

Example:
>>> prod_signs({1, 2, 2, -4}) == -9
>>> prod_signs({0, 1}) == 0
>>> prod_signs({}) == -32768
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    int sum=0;
    int prod=1;
    for(int i=0;i<arr.size();i++){
        sum+=abs(arr[i]);
        prod*=signbit(arr[i])?-1:1;
    }
    return sum*prod;
}
