#include <iostream>
#include <vector>
#include <algorithm>

void next_smallest(int val, std::vector<int>& lst) {
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] < val)
            return;
    }
    std::cout << "-1";
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
            int val = lst[1];
            for(int i = 0; i < lst.size() - 1; i++){
                if(lst[i] != lst[i+1]) {
                    std::cout << lst[i];
                    same = false;
                    break;
                }
                else{
                    val = lst[i];
                }
            }
            next_smallest(val, lst);
        } else std::cout << "-1";

    } else std::cout << "-1";

    return 0;
}