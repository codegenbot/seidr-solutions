#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) { 
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> input; // declare the vector
    float number;
    int count = 0;
    
    while (true) {
        std::cout << "Enter a number (0 to stop): ";
        std::cin >> number;
        
        if (number == 0)
            break;
        
        input.push_back(number);
    }
    
    assert(double_the_difference(input) >= 0); // uncomment when 'odd_sum' is defined
    return 0;
}