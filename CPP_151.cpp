#include <vector>
#include <cmath>
#include <assert.h> 
#include <ostream>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (num % 2 != 0) { 
                sum += std::pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0f, 3.5f, 7.0f};
    long long result = double_the_difference(lst);
    std::cout << "The sum of the squares of odd integers in the list is: " << result << std::endl;
    return 0;
}