```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int x, int y) {
    return x == y;
}

std::vector<int> remove_duplicates(std::vector<int> v) {
    std::vector<int> result;
    for(int i = 0; i < v.size(); i++) {
        bool found = false;
        for(int j = 0; j < result.size(); j++) {
            if(issame(v[i], result[j])) {
                found = true;
                break;
            }
        }
        if(!found) {
            result.push_back(v[i]);
        }
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int>(n);  // Initialize with zeros
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> ((std::vector<int>&)v)[i];
    }

    std::vector<int> result = remove_duplicates(v);

    std::cout << "Duplicates removed: ";
    for(int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}