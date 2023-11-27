#include <iostream>
#include <vector>

bool pairs_sum_to_zero(std::vector<int> l){
    for(int i=0; i<l.size(); i++){
        for(int j=i+1; j<l.size(); j++){
            if(l[i] + l[j] == 0){
                return true;
            }
        }
    }
    return false;
}

// Test cases
std::vector<int> test1 = {1, 2, 3, -1, -2, -3};
std::vector<int> test2 = {1, 2, 3, 4, 5};

// Test the pairs_sum_to_zero function
if (pairs_sum_to_zero(test1)) {
    std::cout << "Test 1: Pairs sum to zero" << std::endl;
} else {
    std::cout << "Test 1: Pairs do not sum to zero" << std::endl;
}

if (pairs_sum_to_zero(test2)) {
    std::cout << "Test 2: Pairs sum to zero" << std::endl;
} else {
    std::cout << "Test 2: Pairs do not sum to zero" << std::endl;
}