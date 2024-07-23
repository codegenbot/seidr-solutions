#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> res;
    for(int i = 1; i < xs.size(); i++) {
        res.push_back(i * xs[i]);
    }
    return res;
}