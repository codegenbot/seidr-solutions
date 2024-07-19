#include <cmath>
#include <vector>

int sum_squares(std::vector<float> lst){
    int total = 0;
    for(float num : lst){
        int ceil_num = std::ceil(num);
        total += std::pow(ceil_num,2);
    }
    return total;
}

int main(){
    assert (sum_squares({-1,1,0})==2);
    std::vector<float> numbers;
    float num;
    while(std::cin >> num){
        numbers.push_back(num);
    }
    int result = sum_squares(numbers);
    std::cout << "Sum of squares: " << result << std::endl;
    return 0;
}