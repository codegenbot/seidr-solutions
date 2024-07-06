```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int strange_sort_list(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    for(int i = 0; i < lst.size() - 1; i++) {
        if(abs(lst[i] - lst[i+1]) > 5) {
            std::reverse(lst.begin()+i, lst.begin()+i+2);
        }
    }
    return 0;
}

int main() {
    std::vector<int> lst;
    int num;

    while(true) {
        std::cout << "Enter a number (or -1 to finish): ";
        std::cin >> num;

        if(num == -1) break;

        lst.push_back(num);
    }

    std::vector<int> result = strange_sort_list(lst);

    for(int n : result) {
        std::cout << n << " ";
    }
    
    return 0;
}