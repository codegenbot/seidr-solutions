#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst;
    long long result = 0;

    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        float num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;

        long long sum = 0;
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
        result += sum;
    }

    std::cout << "The difference of the squares is: " << result << std::endl;

    return 0;
}