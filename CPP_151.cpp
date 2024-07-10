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

    // Input your data
    for(int i=0;i<5;++i){
        float temp;
        std::cin >> temp;
        lst.push_back(temp);
    }

    // Calculate the sum of squares of odd numbers in the list
    for(float x : lst){
        if(int(x) > 0 && int(x) % 2 != 0)
            odd_sum += pow(int(x), 2);
    }
    
    assert (double_the_difference(lst) == odd_sum );
    
    return 0;
}