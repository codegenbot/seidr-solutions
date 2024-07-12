#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(int n) {
    std::vector<int> lst;
    int x;

    for (int i = 0; i < n; i++) {
        std::cin >> x;
        lst.push_back(x);
    }

    if(lst.size() >= 2) {
        std::sort(lst.begin(), lst.end());
        bool same = true;
        for(int i = 1; i < lst.size(); i++){
            if(lst[i] != lst[i-1]) {
                std::cout << lst[i];
                return x;
            }
        }
    } else 
    std::cout << "-1";

    return -1;
}

int userMain() {
    int n;

    std::cout << "Enter number of elements: ";
    std::cin >> n;

    if (n > 0) {
        std::cout << "Enter " << n << " integers: ";
        next_smallest(n);
    } else 
    std::cout << "-1";

    return 0;
}