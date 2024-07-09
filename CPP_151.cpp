#include <cmath>
#include <vector>

float doubleTheDifference(const std::vector<float>& lst) {
    float sum = 0;
    int count = 0;

    for (const auto& num : lst) {
        if (num > 0 && modf(num, &int_part) == 0.0) {
            sum += pow(int_part, 2);
            count++;
        }
    }

    return static_cast<float>(sum - count * num;
}

int main() {
    std::vector<float> lst = {0.5f, 1.2f, -3.7f, 4.0f, 5.5f};
    float odd_sum = 0;
    for (const auto& num : lst) {
        if (num > 0 && modf(num, &int_part) == 0) {
            odd_sum += pow(int_part, 2);
        }
    }
    std::cout << "The difference is: " << doubleTheDifference(lst) << std::endl;
    return 0;
}