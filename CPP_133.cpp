#include <vector>
#include <cmath>
#include <iostream>

int sum_squares(std::vector<int> lst){
    int total = 0;
    for(int num : lst){
        int ceil_num = std::ceil(num);
        total += ceil_num*ceil_num; 
    }
    return total;
}

int main() {
    assert(sum_squares({-1,1,0})==2); 
    int input;
    std::cout << "Enter a number to pass to the sum_squares function: ";
    std::cin >> input;
    int result = sum_squares({input});
}