#include <iostream>
#include <initializer_list>

int double_the_difference(std::initializer_list<int> lst) {
    int main_function_sum = 0;
    int sum_of_odds = odd_sum(lst); // Pass lst to odd_sum function
    for (int num : lst) {
        if(num % 2 == 0)
            main_function_sum += num;
    }
    
    return main_function_sum - sum_of_odds; 
}

int odd_sum(std::initializer_list<int> lst) {
    int sum_of_odds = 0;
    for (int num : lst) {
        if(num % 2 != 0)
            sum_of_odds += num;
    }
    return sum_of_odds;
}

int main_function(std::initializer_list<int> lst) {
    int actual_odd_sum = odd_sum(lst);
    
    int double_the_difference_result = double_the_difference(lst); // Pass lst to double_the_difference function
    assert (double_the_difference_result == actual_odd_sum ); 
    
    return 0; 
}