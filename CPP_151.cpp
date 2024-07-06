#include <iostream>
using namespace std;

long long doubleTheDifference(vector<float> lst) {
    long long sum = 0;
    long long totalSum = 0;
    
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { 
            totalSum += x;  
            sum += pow(x, 2); 
        }
    }
    return totalSum * totalSum - 2 * totalSum * sum;
}