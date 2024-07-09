#include <iostream>
#include <initializer_list>

int main_function() {
    int sum_of_odds = 0;
    std::initializer_list<int> lst = {1, 2, 3, 4, 5};
    for (int num : lst) {
        if(num % 2 != 0)
            sum_of_odds += num;
    }
    return sum_of_odds;
}