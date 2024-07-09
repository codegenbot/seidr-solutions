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
    vector<int> newVector(numbers); // make a copy of the input vector
    sort(newVector.begin(), newVector.end()); // sort the vector in ascending order
    auto it = unique(newVector.begin(), newVector.end()); // find the end of the consecutive sequence of equal elements
    newVector.erase(it, newVector.end()); // remove duplicates
    return newVector;
}

int mainFunction() { 
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> numbers; // declare without size
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