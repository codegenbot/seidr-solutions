#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    int size = xs.size();

    for (int i = 1; i < size; i++) {
        float coefficient = xs[i] * i;
        result.push_back(coefficient);
    }

    return result;
}