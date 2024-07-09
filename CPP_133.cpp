#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

int sum_squares(std::vector<float> lst){
    int sum = 0;
    for(float num : lst){
        sum += std::ceil(num) * std::ceil(num);
    }
    return sum;
}

int main(){
    assert (sum_squares({-1,1,0})==2);
    std::vector<float> numbers;
    float n;
    
    while(std::cin >> n && n != -1.0f){
        numbers.push_back(n);
    }

    int result = sum_squares(numbers);

    if (!std::cin.fail()) {
        std::cout << "Sum of squares: " << result << std::endl;
    } else {
        std::cerr << "Invalid input." << std::endl;
    }
    
    return 0;
}