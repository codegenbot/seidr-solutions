#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && floor(num) == num) {
            sum += pow(num - floor(num), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float sum = 0.0f;
    int odd_sum = 0;

    // input from user
    for (int i = 0; i < 5; i++) {
        float num;
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }

    sum = double_the_difference(lst);

    // output
    std::cout << "Sum of the difference: " << sum << std::endl;

    return 0;
}