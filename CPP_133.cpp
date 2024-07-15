```
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

double square(double n) {
    return pow(n, 2);
}

int sum_squares(vector<float> lst){
    int sum = 0;
    for(float num : lst){
        int ceil_num = ceil(num);
        sum += (int)square(ceil_num);
    }
    return sum;
}