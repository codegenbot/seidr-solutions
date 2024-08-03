#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst);

int main() {
    // Your code here...
}

int sum_squares(std::vector<float> lst) {
    int total = 0;
    for (float num : lst) {
        int ceil_num = ceil(num);
        total += pow(ceil_num, 2);
    }
    return total;
}