#include <vector>
#include <cmath>

double double_the_difference(std::vector<float> lst) {
    double result = 0;
    for (float num : lst) {
        if (num > 0 && num == floor(num) && ((int)num) % 2 != 0) {
            result += pow(num, 2) * 2;
        }
    }
    return result;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    double result = double_the_difference(lst);
    return 0;
}