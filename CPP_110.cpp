#include <iostream>
#include <vector>
#include <string>

std::string exchange(std::vector<int> lst1, std::vector<int> lst2) {
    // Check if lst1 already contains only even numbers
    bool allEven = true;
    for(int num : lst1) {
        if(num % 2 != 0) {
            allEven = false;
            break;
        }
    }
    if(allEven) return "YES";

    // Check if there is at least one even number in lst2
    for(int num : lst2) {
        if(num % 2 == 0) {
            return "YES";
        }
    }

    return "NO";
}

int main() {
    int n1, n2, num;
    std::cin >> n1;
    std::vector<int> lst1(n1);
    for(int i = 0; i < n1; ++i) {
        std::cin >> lst1[i];
    }
    
    std::cin >> n2;
    std::vector<int> lst2(n2);
    for(int i = 0; i < n2; ++i) {
        std::cin >> lst2[i];
    }

    std::cout << exchange(lst1, lst2) << std::endl;
    return 0;
}