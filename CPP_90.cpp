```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> lst;
    int n;

    std::cout << "Enter number of elements: ";
    std::cin >> n;

    if (n > 0) {
        std::cout << "Enter " << n << " integers: ";
        for(int i = 0; i < n; i++){
            int x;
            std::cin >> x;
            if(lst.size() + 1 <= lst.max_size()) 
                lst.push_back(x);
            else {
                std::cout << "-1"; 
                return 0;
            }
        }

        if(lst.size() >= 2) {
            std::sort(lst.begin(), lst.end());
            bool same = true;
            for(int i = 0; i < lst.size() - 1; i++){
                if(lst[i] != lst[i+1]) {
                    std::cout << lst[i];
                    same = false;
                    break;
                }
            }
            if(same) std::cout << "-1";
        } else std::cout << "-1";

    } else std::cout << "-1";

    return 0;
}