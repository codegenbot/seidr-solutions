#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(float x : lst){
        if(int(x) > 0 && int(x) % 2 != 0)
            sum += pow(int(x), 2);
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    float odd_sum = 0.0f; 

    // Input from user
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for(int i = 0; i < n; i++){
        float x;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> x;
        lst.push_back(x);
    }

    // Calculate the sum of squares of odd elements
    for(float x : lst){
        if(int(x) > 0 && int(x) % 2 != 0)
            odd_sum += pow(int(x), 2);
    }

    // Check if the difference is correct
    assert (double_the_difference(lst) == odd_sum );
    
    return 0;
}