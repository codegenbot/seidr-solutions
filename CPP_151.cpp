#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && modf(x, &x) == 0) {
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    for(float i = 1.5f; i <= 10.5f; i+= 0.5f){
        lst.push_back(i); 
    }

    int odd_sum = 0; 
    for (float x : lst) {
        if (x > 0 && modf(x, &x) == 0) {
            odd_sum += x;
        }
    }

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}