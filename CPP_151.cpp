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

    // Read input from user
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for(int i = 0; i < n; i++){
        float x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        lst.push_back(x);

        if(int(x) > 0 && int(x) % 2 != 0)
            odd_sum += x;
    }

    // Calculate the difference
    long long result = double_the_difference(lst) - odd_sum;

    // Print output
    std::cout << "The difference is: " << result << std::endl;
    
    assert (double_the_difference(lst) == odd_sum );
    
    return 0;
}