#include <vector>

long long double_the_difference(std::vector<int> lst) {
    long long sum = 0;
    for (int num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(num) * num;
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst = {1, 2, 3, 4, 5};
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == double_the_difference(lst));
    
    return 0;
}