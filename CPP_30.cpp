#include <iostream>
#include <vector>

bool issame(const std::vector<std::unique_ptr<float>>& a, const std::vector<std::unique_ptr<float>>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if(n > 0) {
        std::vector<std::unique_ptr<float>> numbers;
        for(int i=0; i<n;i++){
            std::cout << "Enter element " << i+1 << ": ";
            float num;
            std::cin >> num;
            numbers.push_back(std::make_unique<float>(num));
        }

        std::vector<std::unique_ptr<float>> positive_numbers = get_positive(numbers);

        if(issame(get_positive(numbers), positive_numbers)) {
            std::cout << "The list of positive numbers is: ";
            for (auto& num : positive_numbers) {
                std::cout << *num << " ";
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

std::vector<std::unique_ptr<float>> get_positive(const std::vector<std::unique_ptr<float>>& numbers) {
    std::vector<std::unique_ptr<float>> positive_numbers;
    for (auto& num : numbers) { 
        if (*num > 0) {
            positive_numbers.push_back(std::make_unique<float>(*num));
        }
    }
    return positive_numbers;
}