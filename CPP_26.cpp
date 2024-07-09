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

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::set<int> unique_numbers(numbers.begin(), numbers.end());
    return std::vector<int>(unique_numbers.begin(), unique_numbers.end());
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

    std::vector<int> result = remove_duplicates(numbers);

    if (areVectorsEqual(result, numbers)) {
        std::cout << "The resulting vector is the same as the original." << std::endl;
    } else {
        std::cout << "The resulting vector is different from the original." << std::endl;
    }

    return 0;
}