#include <initializer_list>
#include <cassert>
#include <vector>

long double_the_difference(const std::vector<int>& input) {
    long average = 0;
    for (int num : input) {
        average += num;
    }
    return average * average;
}

int main_function() { 
    std::vector<int> odd_sum = {1, 2, 3}; 
    int sum_of_odds = 0; 
    for (int num : odd_sum) {
        if(num % 2 != 0)
            sum_of_odds += num;
    }
    sum_of_odds = double_the_difference(odd_sum);
}