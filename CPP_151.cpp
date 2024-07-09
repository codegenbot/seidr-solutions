```cpp
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    lst.push_back(3.5); // Add some values to the vector
    lst.push_back(-4.5); 
    lst.push_back(1.5); 

    // Use the function with declared variables
    assert(double_the_difference(lst) == 13);
}