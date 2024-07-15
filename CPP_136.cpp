#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> largest_smallest_integers(std::vector<int> lst);

int main() {
    // Code for main function goes here
}

void annual_income(); // Declaration of annual_income function should be before issame function

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int max_neg = INT_MIN, min_pos = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > max_neg){
            max_neg = num;
        }
        if(num > 0 && num < min_pos){
            min_pos = num;
        }
    }
    
    return {max_neg, min_pos};
}

bool issame(std::vector<int> a, std::vector<int> b){
    // Code for issame function
}