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
    float odd_sum = 0;
    // use your function here
    // Input from user and call the function
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i=0; i<n; i++){
        float x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        lst.push_back(x);
    }
    
    odd_sum = double_the_difference(lst);
    // Display the output
    if(odd_sum > 0 && floor(odd_sum) == odd_sum){
        std::cout << "Sum of squares: " << odd_sum << std::endl;
    } else {
        std::cout << "Sum of squares is not an integer." << std::endl;
    }
    
    return 0;
}