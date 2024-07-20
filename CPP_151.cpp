#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<double> lst) {
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2); 
            }
        }
    }
    return sum;
}

int main() {
    vector<double> lst = {1, 2, 3};
    double odd_sum = 0;
    for (double num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                odd_sum += pow(num, 2); 
            }
        }
    }
    assert(double_the_difference(lst) == odd_sum );
    return 0;
}