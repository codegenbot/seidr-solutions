```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (std::abs(num) - std::floor(std::abs(num)) < 1e-9) {
            sum += pow(num, 2);
        }
    }
    return sum;

}

int main() {
    std::vector<float> lst; 
    int odd_sum = 0;
    
    cout << "Enter numbers (enter 'stop' to finish):" << endl;
    while(1) {
        float num;
        
        cin >> num;
        
        if(std::to_string(num) == "stop") break;

        if(std::abs(num) - std::floor(std::abs(num)) < 1e-9) {
            odd_sum = 0; 
            for (float n : lst) { 
                if (std::abs(n) - std::floor(std::abs(n)) < 1e-9) {
                    odd_sum += double_the_difference(lst);
                }
            }
        }
        lst.push_back(num);    
    }

    cout << "Sum of squared values: " << odd_sum << endl;
}