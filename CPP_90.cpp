```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(int x) {
    int n = x;
    if (n <= 1) return -1;
    int res = -1;
    while (n > 0) {
        n /= 10;
        if (res == -1 || res > n) res = n;
    }
    return res;
}

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
            lst.push_back(x);
        }

        if(lst.size() >= 2) {
            std::sort(lst.begin(), lst.end());
            bool same = true;
            for(int i = 0; i < lst.size() - 1; i++){
                if(lst[i] != lst[i+1]) {
                    if(next_smallest(lst[i]) == -1) std::cout << "-1";
                    else std::cout << lst[i];
                    same = false;
                    break;
                }
            }
            if(same) std::cout << "-1";
        } else std::cout << "-1";

    } else std::cout << "-1";

    return 0;
}