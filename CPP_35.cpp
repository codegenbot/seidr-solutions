#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
float max_element(vector<float> l){
    float max = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max) {
            max = l[i];
        }
    }
    return max;
}