```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool areVectorsEqual(vector<int> a, vector<int> b) {
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

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> newVector;
    newVector.reserve(numbers.size());  
    sort(newVector.begin(), newVector.end()); 
    auto it = unique(newVector.begin(), newVector.end()); 
    newVector.erase(it, newVector.end()); 
    return newVector;
}

int mainFunction() { 
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    vector<int> numbers; // declare without size
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    vector<int> result = remove_duplicates(numbers);

    if (areVectorsEqual(result, numbers)) {
        std::cout << "The resulting vector is the same as the original." << std::endl;
    } else {
        std::cout << "The resulting vector is different from the original." << std::endl;
    }

    return 0;
}