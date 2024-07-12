#include <iostream>
#include <vector>
#include <algorithm>

int max_consecutive(int n) {
    std::vector<int> lst;
    
    for(int i = 0; i < n; i++){
        int x;
        std::cin >> x;
        lst.push_back(x);
    }

    if(lst.size() >= 2) {
        std::sort(lst.begin(), lst.end());
        bool same = true;
        int max_consecutive = 1;
        for(int i = 0; i < lst.size() - 1; i++){
            if(lst[i] == lst[i+1]) {
                same = true;
                while(i + 1 < lst.size() && lst[i] == lst[i+1]){
                    i++;
                }
                max_consecutive = i + 1 - i;
            } else {
                same = false;
                break;
            }
        }
        if(same) std::cout << "-1";
        else std::cout << lst[0];
    } else std::cout << "-1";

    return 0;
}