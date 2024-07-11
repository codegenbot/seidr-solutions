```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::frexp(num, &num) == 0.0) {
            sum += pow(num, 2);
        }
    }
    return sum;

}

int main() {
    int odd_sum = 0;    
    std::vector<float> lst; 
    
    std::cout << "Enter numbers (enter 'stop' to finish):" << std::endl;
    while(true) {
        float num;
        
        std::cin >> num;
        
        if(std::to_string(num) == "stop") break;

        if(num > 0 && std::frexp(num, &num) == 0.0) {
            odd_sum = 0; 
            for (float n : lst) { 
                if (n > 0 && std::frexp(n, &n) == 0.0) {
                    odd_sum += double_the_difference(lst);
                }
            }
        }
        lst.push_back(num);    
    }

    std::cout << "Sum of squared values: " << odd_sum << std::endl;
}