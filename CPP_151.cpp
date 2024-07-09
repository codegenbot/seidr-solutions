#include <iostream>
#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(float num : lst){
        if(int(num) > 0 && int(num) % 2 != 0)
            sum += (int(num) * int(num));
    }
    return sum;
}

int main() {
    std::vector<float> inputVector; // declare input vector
    int n;
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> n;
    
    for(int i = 0; i < n; ++i){
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        inputVector.push_back(num);
    }
    
    long long result = double_the_difference(inputVector); // call the function
    
    std::cout << "The sum of the squares of odd positive elements is: " << result << std::endl;

    return 0;
}