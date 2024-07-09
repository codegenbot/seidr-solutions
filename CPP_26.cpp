#include <iostream>
#include <vector>
#include <algorithm>

bool areVectorsEqual(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    std::sort(numbers.begin(), numbers.end()); 
    auto last = numbers.begin();
    for (auto it = numbers.begin(); it != numbers.end() - 1; ++it) {
        if (*it == *(it + 1)) {
            last = it;
        }
    }
    numbers.erase(last + 1, numbers.end());  // Remove duplicates

    std::vector<int> result(numbers.begin(), numbers.end()); 
    for (int i : numbers) {  // Create a new vector with unique elements
        if (std::find(result.begin(), result.end(), i) == result.end())
            result.push_back(i);
    }
    return result;
}

int mainFunction() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> numbers;  // Declare and initialize the vector
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    std::vector<int> uniqueNumbers = remove_duplicates(numbers);

    if (areVectorsEqual(uniqueNumbers, numbers)) {
        std::cout << "The resulting vector is the same as the original." << std::endl;
    } else {
        std::cout << "The resulting vector is different from the original." << std::endl;
    }

    return 0;
}