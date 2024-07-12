#include <iostream>
#include <vector>

int sum_squares(std::vector<float> lst){
    int total = 0;
    for(float x : lst){
        total += ceil(x)*ceil(x);
    }
    return total;

int main(){
    std::vector<float> input; // get input from user

    float num;
    while (std::cin >> num) {
        input.push_back(num);
    }

    int result = sum_squares(input);
    std::cout << "Sum of squares: " << result << std::endl;

    return 0;
}