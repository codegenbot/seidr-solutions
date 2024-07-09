#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(std::find(b.begin(), b.end(), a[i]) == b.end()) return false;
    }
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> v) {
    std::vector<int> result;
    for(int i = 0; i < v.size(); i++) {
        if(std::find(result.begin(), result.end(), v[i]) == result.end()) {
            result.push_back(v[i]);
        }
    }
    return result;
}

int main() {
    std::vector<int> numbers = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    for(int i : numbers) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    if(!isSame(numbers, {1, 4, 5})) {
        std::cout << "assert failed" << std::endl;
    } else {
        std::cout << "assert passed" << std::endl;
    }
}