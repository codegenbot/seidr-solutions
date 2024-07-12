#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if(lst.size() == 0)
        return -1;
    int res = -1;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]){
            res = lst[i];
            break;
        }
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
                    std::cout << "-1";
                    same = false;
                    break;
                }
            }
            if(same) std::cout << " -1";
            else{
                int smallest = next_smallest(lst);
                if(smallest == -1)
                    std::cout << "-1";
                else
                    std::cout << " " << smallest;
            }
        } else std::cout << "-1";

    } else std::cout << "-1";

    return 0;
}