#include <iostream>
#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    for (int i = 0; i < lst1.size(); ++i) {
        if (lst1[i] % 2 != 0) {
            bool found_even = false;
            for (int j = 0; j < lst2.size(); ++j) {
                if (lst2[j] % 2 == 0) {
                    found_even = true;
                    lst2[j] = -1; // Mark as used
                    break;
                }
            }
            if (!found_even) return "NO";
        }
    }
    return "YES";
}

int main() {
    std::vector<int> lst1, lst2;
    int n, m, val;
    
    std::cin >> n >> m;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> val;
        lst1.push_back(val);
    }
    
    for (int i = 0; i < m; ++i) {
        std::cin >> val;
        lst2.push_back(val);
    }
    
    std::cout << exchange(lst1, lst2) << std::endl;
    
    return 0;
}