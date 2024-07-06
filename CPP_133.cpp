#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int sum_squares(vector<float> lst){
    int result = 0;
    for (float x : lst) {
        int rounded = ceil(x);
        result += pow(rounded, 2);
    }
    return result;
}