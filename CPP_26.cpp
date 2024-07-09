#include <iostream>
#include <vector>
#include <algorithm>
#include <assert.h>

bool issame(vector<int> a, vector<int> b) {
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

    vector<int> numbers(n);
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> numbers[i];
    }

    vector<int> result = remove_duplicates(numbers);

    if (issame(result, numbers)) {
        std::cout << "The resulting vector is the same as the original." << std::endl;
    } else {
        std::cout << "The resulting vector is different from the original." << std::endl;
    }

    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}