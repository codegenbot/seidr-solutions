#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    return nums;
}

int main() {
    assert(order_by_points({0, 6, 6, -76, -21, 23, 4}) == std::vector<int>{-76, -21, 0, 4, 23, 6, 6});

    return 0;
}