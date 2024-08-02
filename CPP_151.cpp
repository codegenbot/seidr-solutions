#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float input;
    int count = 0;

    while (true) {
        std::cout << "Enter a number (or -1 to stop): ";
        std::cin >> input;
        if (input == -1) {
            break;
        }
        lst.push_back(input);
    }

    long long result = double_the_difference(lst);

    std::cout << "The sum of squares is: " << result << std::endl;

    return 0;
}