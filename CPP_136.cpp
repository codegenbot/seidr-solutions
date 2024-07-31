#include <iostream>
#include <vector>
#include <limits.h>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > largest_negative){
            largest_negative = num;
        }
        if(num > 0 && num < smallest_positive){
            smallest_positive = num;
        }
    }
    
    return {largest_negative, smallest_positive};
}

int main(){
    std::vector<int> input = {-5, 3, 1, -10, 7};
    std::vector<int> result = largest_smallest_integers(input);
    
    std::cout << "Largest negative: " << result[0] << " Smallest positive: " << result[1] << "\n";
    
    std::vector<int> check1 = {-10, 1};
    std::vector<int> check2 = largest_smallest_integers(input);
    
    if(issame(check1, check2)){
        std::cout << "Output is correct!\n";
    } else {
        std::cout << "Output is incorrect!\n";
    }
    
    return 0;
}