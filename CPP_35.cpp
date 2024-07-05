#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

float max_element(vector<float> l){
    float max_val = l[0];
    for(float val : l) {
        if(val > max_val) {
            max_val = val;
        }
    }
    return max_val;
}