#include <vector>
#include <cassert>

long double_the_difference(const std::vector<int>& input) {
    long average = 0;
    for (int num : input) {
        average += num;
    }
    return static_cast<long>(average * average);
}

int main() {
    std::vector<int> lst = {1,2,3};
    int odd_sum = 0;
    for (int num : lst) {
        if(num % 2 != 0)
            odd_sum += num;
    }
    assert(double_the_difference(lst) == odd_sum); 
}