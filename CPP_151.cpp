```cpp
#include <cassert>
#include <vector>
#include <initializer_list>

long double_the_difference(const std::vector<int>& input) {
    long average = 0;
    for (int num : input) {
        average += num;
    }
    return average * average;
}

int main_function() { 
    auto lst = {1,2,3}; 
    int sum_of_odds = 0; 
    for (int num : lst) {
        if(num % 2 != 0)
            sum_of_odds += num;
    }
    assert(double_the_difference(lst) == sum_of_odds);
}