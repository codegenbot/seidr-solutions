#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    int sum = 0;
    int product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    return a == b && sum == b[0] && product == b[1];
}

int main() {
    return issame(sum_product({10}), {10, 10});
}