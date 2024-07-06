#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int sum_squares(vector<float> lst){
    int sum = 0;
    for(float x : lst) {
        double ceil_x = ceil(x);
        sum += (ceil_x * ceil_x);
    }
    return sum;
}