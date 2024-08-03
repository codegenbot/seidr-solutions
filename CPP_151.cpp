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
    for(int i = 1; i <= 10; ++i){
        lst.push_back(i * 3.5f); // add your code to fill the vector with values
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