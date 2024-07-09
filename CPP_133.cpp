#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int sum_squares(vector<float> lst){
    int sum = 0;
    for (auto num : lst) {
        int rounded_num = ceil(num);
        sum += rounded_num * rounded_num;
    }
    return sum;
}