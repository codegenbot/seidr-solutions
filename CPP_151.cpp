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
    float temp;
    std::cout << "Enter numbers (enter 'stop' to stop input): ";
    while(std::cin >> temp) {
        if(temp == 'stop') break;
        lst.push_back(temp);
    }
    
    long long odd_sum = double_the_difference(lst);

    return 0;
}