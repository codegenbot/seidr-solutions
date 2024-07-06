#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int sum_squares(vector<float> lst){
    int total = 0;
    for(auto num : lst){
        total += ceil(num)*ceil(num);
    }
    return total;
}