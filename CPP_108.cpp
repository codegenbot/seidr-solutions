#include <vector>
#include <cassert>
#include <iostream>
#include <algorithm>

int count_nums(std::vector<int> n){
    int count = 0;
    for(int num : n){
        int sum = 0;
        int temp = std::abs(num);
        while(temp != 0){
            sum += temp % 10;
            temp /= 10;
        }
        if(sum > 0){
            count++;
        }
    }
    return count;
}

int main(){
    std::cout << count_nums({1}) << std::endl;
    std::cout << count_nums({0}) << std::endl;
    std::cout << count_nums({-123}) << std::endl;
    std::cout << count_nums({-5, 0, 10, -25, 100}) << std::endl;
    std::cout << count_nums({-1, 2, -3, 4, -5, 6}) << std::endl;

    return 0;
}