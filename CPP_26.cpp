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
    std::vector<int> result(numbers.size());
    std::fill_n(result.begin(), numbers.size(), 0); 
    std::sort(result.begin(), result.end()); 
    auto it = std::unique(result.begin(), result.end()); 
    result.erase(it, result.end()); 
    return result;
}

int mainFunction() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> numbers(n);
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        int num;
        std::cin >> num;
        numbers[i] = num;
    }

    std::vector<int> uniqueNumbers = remove_duplicates(numbers);

    if (areVectorsEqual(uniqueNumbers, numbers)) {
        std::cout << "The resulting vector is the same as the original." << std::endl;
    } else {
        std::cout << "The resulting vector is different from the original." << std::endl;
    }

    return 0;
}