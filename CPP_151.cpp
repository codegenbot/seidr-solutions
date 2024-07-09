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
    int n; // number of elements in the vector
    std::cout << "Enter the number of elements: ";
    std::cin >> n; // read the number
    
    for(int i = 0; i < n; i++) {
        float num;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> num;
        inputVector.push_back(num); // add elements to vector
    }
    
    long long result = double_the_difference(inputVector); // call the function
    
    std::cout << "The sum of squares of odd numbers in the list is: " << result << std::endl;

    return 0;
}