```cpp
#include <iostream>
#include <vector>
#include <map>

int search(std::vector<int> lst) {
    std::map<int, int> freq;
    for (int i : lst) {
        freq[i]++;
    }
    for (auto p = freq.begin(); p != freq.end(); ++p) {
        if (p->second >= p->first) {
            return p->first;
        }
    }
    return -1;
}

int main() {
    int n; 
    std::vector<int> lst;
    
    std::cout << "Enter the size of the first list: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int val;
        std::cout << "Enter a value: ";
        std::cin >> val;
        lst.push_back(val);
    }
    
    int result = search(lst);
    std::cout << "Result: " << result << std::endl;

    int m; 
    std::vector<int> lst2;
    
    std::cout << "Enter the size of the second list: ";
    std::cin >> m;
    for (int i = 0; i < m; ++i) {
        int val;
        std::cout << "Enter a value: ";
        std::cin >> val;
        lst2.push_back(val);
    }
    
    int result2 = search(lst2);
    std::cout << "Result: " << result2 << std::endl;

    return 0;
}