#include <vector>
#include <cmath>

float double_the_difference(const std::vector<float>& lst) {
    float even_sum = 0;
    for (const auto& num : lst) {
        if (num > 0 && modf(num, &int_part) == 0) {
            even_sum += pow(int_part, 2);
        }
    }
    return static_cast<float>(even_sum - (lst.size() / 2.0 * lst[0]));
}

int main() {
    std::vector<float> lst = {0.5f, 1.2f, -3.7f, 4.0f, 5.5f};
    float odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &int_part) == 0) {
            odd_sum += pow(int_part, 2);
        }
    }
    float difference = double_the_difference(lst);
    std::cout << "The difference is: " << difference - odd_sum;
}