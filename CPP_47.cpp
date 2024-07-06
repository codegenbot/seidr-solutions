```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

float median(std::vector<float> numbers) {
    if (numbers.empty()) 
        throw std::runtime_error("Input vector is empty");
    
    std::sort(numbers.begin(), numbers.end());
    if (numbers.size() % 2 == 0)
        return ((numbers[numbers.size()/2 - 1] + numbers[numbers.size()/2]) / 2.0);
    else
        return numbers[numbers.size()/2];

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<std::string> vec(n);

    for (std::string &x : vec) {
        std::cout << "Enter element: ";
        char temp[100]; // declare a character array to hold user input
        std::cin >> temp;  // read the input into the character array
        x = temp;          // convert the character array to string
    }

    try {
        float medianVal = 0.0f; // initialize median value as 0
        for (const auto &num : vec) { // iterate through each element in vector
            medianVal += std::stof(num); // convert each string to a floating point number and add it to the sum
        }
        medianVal /= vec.size();      // calculate the average of the numbers
        std::cout << "Median is " << medianVal << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}