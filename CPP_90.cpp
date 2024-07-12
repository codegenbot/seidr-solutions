```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> lst;
int n;

std::cin >> n;
std::cout << "Enter " << n << " integers: ";
for(int i = 0; i < n; i++){
    int x;
    std::cin >> x;
    lst.push_back(std::to_string(x));
}
if(lst.size() < 2) std::cout << "-1";
else {
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
}