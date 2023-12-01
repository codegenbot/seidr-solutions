#include <vector>
#include <cmath>
#include <cassert>

int doubleTheDifference(std::vector<float> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && std::floor(lst[i]) == lst[i] && static_cast<int>(lst[i]) % 2 != 0) {
            sum += std::pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.5, 4.0, 5.5};
    int odd_sum = doubleTheDifference(lst);
    assert(odd_sum == doubleTheDifference(lst));
    
    return 0;
}