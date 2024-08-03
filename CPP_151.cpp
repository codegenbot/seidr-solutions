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
    int n;
    float x;

    // Read input from user
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        lst.push_back(x);
    }

    // Calculate and print the result
    long long result = double_the_difference(lst);

    std::cout << "The doubled difference is: " << result << std::endl;

    return 0;
}