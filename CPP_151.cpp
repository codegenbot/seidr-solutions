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
    int n;
    std::vector<float> lst;

    // Read input from user
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }

    // Call the function
    long long result = double_the_difference(lst);

    // Print output to user
    if (result > 0) {
        std::cout << "The difference is: " << result << std::endl;
    } else {
        std::cout << "No difference" << std::endl;
    }

    return 0;
}