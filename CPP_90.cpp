#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] > lst[i+1]) return lst[i];
    }
    return -1;
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
                    std::cout << "The next smallest integer is: " << next_smallest(std::vector<int>(lst.begin(), lst.end()));
                    return 0;
                }
            }
            if(same) std::cout << "-1";
        } else std::cout << "-1";

    } else std::cout << "-1";

    return 0;
}