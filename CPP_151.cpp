#include <vector>
#include <cmath>
#include <cassert>

double double_the_difference(std::vector<float> lst) {
    double sum = 0;
    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 == 1) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    
    lst.push_back(1.0); // Example element, add additional elements here
    
    double odd_sum = 1.0; // Example value, replace with the actual expected sum
    
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}