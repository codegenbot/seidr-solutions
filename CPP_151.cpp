```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i=0; i<n; i++){
        float num;
        std::cout << "Enter element "<<i+1<<": ";
        std::cin >> num;
        lst.push_back(num);
    }
    
    float odd_sum = 0;
    long long result = double_the_difference(lst);
    return 0;
}