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
    int n;
    
    // read input from user and populate the vector
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> temp;
        lst.push_back(temp);
    }

    long long odd_sum = double_the_difference(lst);

    // assert statements to verify the output
    return 0;
}