#include <cmath>
#include <vector>

int main() {
    int sum_squares(std::vector<float> lst) {
        int total = 0;
        for (float num : lst) {
            int ceil_num = ceil(num);
            total += pow(ceil_num, 2);
        }
        return total;
    };

    std::vector<float> lst = {1.5f, 2.5f, 3.5f};
    int result = sum_squares(lst);
    return 0;
}