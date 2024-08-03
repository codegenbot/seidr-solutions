```cpp
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
    std::vector<float> lst;
    float num;
    
    // Read input from user
    while(std::cin >> num) {
        lst.push_back(num);
    }

    long long result = double_the_difference(lst);

    // Print the output
    if(result > 0) {
        std::cout << "The sum of squares of all non-negative numbers is: " << result << std::endl;
    } else {
        std::cout << "No non-negative numbers were provided." << std::endl;
    }

    return 0;
}