#include <vector>
#include <algorithm>

int main_function() {
    std::vector<int> odd_sum = {1,2,3}; 
    int sum_of_odds = 0; 
    for (int num : odd_sum) {
        if(num % 2 != 0)
            sum_of_odds += num;
    }
    return 0;
}

double the_difference(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    int diff = lst[1] - lst[0];
    return static_cast<double>(diff);
}