#include <vector>

long long double_the_difference(std::vector<int> lst){
    long long sum = 0;
    for (int num : lst) {
        if (num > 0 && num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst = {1, 2, 3, 4, 5};
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == 16);
    return 0;
}