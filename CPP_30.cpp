#include <iostream>
#include <vector>
#include <limits>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if(n > 0) {
        std::vector<float> numbers;
        for(int i=0; i<n;i++){
            std::cout << "Enter element " << i+1 << ": ";
            float num;
            std::cin >> num;
            numbers.push_back(num);
        }

        std::vector<float> positive_numbers = getPositive(numbers);

        if(issame(getPositive(numbers), positive_numbers)) {
            std::cout << "The list of positive numbers is: ";
            for (float num : positive_numbers) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "No positive numbers found." << std::endl;
        }

    } else {
        std::cout << "Please enter a number greater than zero." << std::endl;
    }

    return 0;

}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> getPositive(const std::vector<float>& numbers) {
    std::vector<float> positive_numbers;
    for (float num : numbers) {
        if (num > 0) {
            positive_numbers.push_back(num);
        }
    }
    return positive_numbers;
}