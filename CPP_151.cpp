#include <iostream>
#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst) {
    vector<float> positiveIntegers;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { 
            positiveIntegers.push_back(x);
        }
    }
    
    long long sum = 0;
    for (float x : positiveIntegers) {
        sum += pow(x, 2); 
    }
    
    return sum;
}