#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst = {1.0f, 2.5f, -3.0f, 4.0f, -5.5f};
    long long double_the_difference(vector<float> lst) {
        long long sum = 0;
        for (float num : lst) {
            if (num > 0 && floor(num) == num) { 
                if (fmod(num, 2.0) != 0.0) { 
                    sum += pow(num, 2);
                }
            }
        }
        return sum;
    }
    
    std::cout << "The result is: " << double_the_difference(lst) << std::endl;
    return 0;
}