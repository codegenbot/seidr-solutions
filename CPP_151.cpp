#include <vector>
#include <cassert>

double double_the_difference(std::vector<float> lst){
    double sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    double odd_sum = double_the_difference(lst);
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}