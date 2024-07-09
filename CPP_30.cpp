#include <iostream>
#include <vector>

std::vector<float> get_positive(const std::vector<float>& numbers) {
    std::vector<float> positive_numbers;
    for (float num : numbers) {
        if (num > 0) {
            positive_numbers.push_back(num);
        }
    }
    return positive_numbers;
}

bool same(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<float> numbers(n);
    for(int i=0; i<n;i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> numbers[i];
    }

    std::vector<float> positive_numbers = get_positive(numbers);

    if(same(get_positive(numbers), positive_numbers)) {
        std::cout << "The list of positive numbers is: ";
        for (float num : positive_numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No positive numbers found." << std::endl;
    }

    return 0;
}