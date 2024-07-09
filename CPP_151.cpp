#include <cmath>
#include <vector>

float double_the_difference(const std::vector<float>& lst) {
    float even_sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &int_part) == 0) {
            even_sum += pow(int_part, 2);
        }
    }
    return even_sum - static_cast<float>(lst.size());
}

int main() {
    std::vector<float> lst = {0.5f, 1.2f, -3.7f, 4.0f, 5.5f};
    float odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &int_part) == 0) {
            odd_sum += pow(int_part, 2);
        }
    }
    std::cout << double_the_difference(lst) << std::endl;
}