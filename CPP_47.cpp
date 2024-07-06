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
        char temp[100]; 
        std::cin >> temp;  
        x = temp;         
    }

    try {
        float medianVal = 0.0f; 
        for (const auto &num : vec) { 
            medianVal += stof(num); 
        }
        medianVal /= vec.size();      
        std::cout << "Median is " << medianVal << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    return 0;