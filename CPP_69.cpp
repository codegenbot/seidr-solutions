```
#include <iostream>
#include <vector>

int search(std::vector<int> lst) { 
    int max = -1;
    for (int i : lst) {
        if (i > 0 && std::count(lst.begin(), lst.end(), i) >= 2) { 
            max = i;
        }
    }
    return max;
}

int main() {
    std::cout << search({3, 10, 10, 9, 2}) << std::endl;
    return 0;
}