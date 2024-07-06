#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { 
            sum += pow(x, 2); 
        } else if (x < 0 && ceil(x) == x) {
            sum -= pow(x, 2);
        }
    }
    return sum;
}