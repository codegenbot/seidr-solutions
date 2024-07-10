#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(auto num : lst){
        if(int(num) > 0 && int(num) == int(num)){
            sum += pow(int(num), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(float i = 0; i < n; i++){
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> lst.push_back(i);
    }
    
    long long odd_sum = double_the_difference(lst);

    return 0;
}