#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int sum_squares(vector<float> lst){
    int total = 0;
    for(float x : lst){
        total += ceil(x) * ceil(x);
    }
    return total;
}