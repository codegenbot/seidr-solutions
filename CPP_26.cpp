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
    std::vector<int> newVector;
    for(int i:numbers){
        if(std::find(newVector.begin(), newVector.end(), i) == newVector.end()){
            newVector.push_back(i);
        }
    }
    return newVector;
}

int mainFunction() { 
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> numbers(n);
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> numbers[i];
    }

    std::vector<int> result = remove_duplicates(numbers);

    numbers.clear(); // clear the original vector before comparison
    if (areVectorsEqual(result, numbers)) {
        std::cout << "The resulting vector is the same as the original." << std::endl;
    } else {
        std::cout << "The resulting vector is different from the original." << std::endl;
    }

    return 0;
}