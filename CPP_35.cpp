#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
float max_element(vector<float> l){
    float max_val = l[0];
    for (float num : l) {
        if (num > max_val) {
            max_val = num;
        }
    }
    return max_val;
}