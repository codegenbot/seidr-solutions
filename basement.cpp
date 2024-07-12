#include <iostream>
#include <vector>

int basement(std::vector<int> vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); ++i) {
        sum += vec[i];
        if (sum < 0) {
            return i;
        }
    }
    return 0;
}

int main() {
    int size;
    std::cin >> size;
    
    std::vector<int> vec(size);
    for (int i = 0; i < size; ++i) {
        std::cin >> vec[i];
    }
    
    int result = basement(vec);
    std::cout << result << std::endl;
    
    return 0;
}