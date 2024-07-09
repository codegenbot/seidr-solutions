#include <iostream>
#include <initializer_list>

int main_function(std::initializer_list<int> lst) {
    int sum_of_odds = 0;
    for (int num : lst) {
        if(num % 2 != 0)
            sum_of_odds += num;
    }
    return sum_of_odds;
}