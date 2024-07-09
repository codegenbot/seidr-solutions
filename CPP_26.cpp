```cpp
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

std::vector<int> remove_duplicates(std::vector<int>& numbers) {
    std::sort(numbers.begin(), numbers.end()); 
    auto it = std::unique(numbers.begin(), numbers.end()); 
    numbers.erase(it, numbers.end()); 
    std::vector<int> result(numbers.size());
    for(int i = 0; i < numbers.size(); i++){
        result.push_back(numbers[i]);
    }
    return result;
}

int mainFunction() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> numbers;
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