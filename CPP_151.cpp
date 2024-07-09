#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && std::floor(x) == x) {
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;

    while(std::cin >> num) {
        lst.push_back(num);
    }

    int odd_sum = 0; 

    if (!lst.empty()) { 
        odd_sum = (int)std::accumulate(lst.begin(), lst.end(), 0.0f, 
                                       [](float sum, float x){ return (x > 0 && std::floor(x) == x) ? sum + pow(x, 2) : sum; });
    }

    assert(double_the_difference(lst) == odd_sum); 

    return 0;
}