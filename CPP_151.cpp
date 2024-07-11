```cpp
#include <iostream>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += pow(num, 2);
        }
    }
    return sum;

}

int main() {
    int odd_sum = 0;
    float num;

    std::cout << "Enter numbers (enter 'stop' to finish):" << std::endl;
    std::vector<float> lst;

    while(1) {
        std::cin >> num;

        if(std::to_string(num) == "stop") break;

        if(num > 0 && modf(num, &num) == 0.0) {
            long long sum = 0; 
            for (float n : lst) { 
                if (n > 0 && modf(n, &n) == 0.0) {
                    sum += double_the_difference(std::vector<float>(lst.begin(), lst.end()));
                }
            }
            odd_sum = sum;
        }
        lst.push_back(num);    
    }

    std::cout << "Sum of squared values: " << odd_sum << std::endl;
}