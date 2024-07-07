#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int prod_signs(vector<int> arr){
    int product = 1;
    int sumMagnitude = 0;
    
    for(int i: arr){
        if(i != 0){
            product *= (i > 0)? 1 : -1;
            sumMagnitude += abs(i);
        }
    }
    
    return (arr.empty())? -32768 : product * sumMagnitude;
}