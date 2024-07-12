```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> getNumbers(int n) {
    std::vector<int> lst;
    if (n > 0) {
        for(int i = 0; i < n; i++){
            int x;
            std::cin >> x;
            lst.push_back(x);
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
    
    return lst;
}