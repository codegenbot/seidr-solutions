#include <vector>

long double_the_difference(const std::vector<int>& input) {
    long average = 0;
    for (int num : input) {
        average += num;
    }
    return static_cast<long>(average * average);
}

int main() {
    std::vector<int> lst = {1,2,3};
    assert(double_the_difference(lst) == 14); 
}