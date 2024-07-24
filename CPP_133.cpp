#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

long long sum_squares(vector<float> lst){
    long long total = 0;
    for (float x : lst) {
        int rounded = ceil(x);
        total += static_cast<long long>(rounded * rounded); 
    }
    return total;
}