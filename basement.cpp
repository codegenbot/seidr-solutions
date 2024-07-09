```cpp
#include <vector>
#include <iostream>

int basement(std::vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i + 1;
    }
    return -1;
}

int main() {
    std::vector<int> v;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    v.resize(n);
    
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> v[i];
    }
    
    int result = basement(v);
    if (result == -1)
        std::cout << "No such index exists.\n";
    else
        std::cout << "The first negative sum index is: " << result << "\n";
    return 0;
}