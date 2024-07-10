#include <iostream>
#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {}; // initialize the list
    int odd_sum = 0; // declare and initialize odd_sum
    assert (double_the_difference(lst) == odd_sum );
    return 0;
}