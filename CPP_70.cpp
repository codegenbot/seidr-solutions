```cpp
#include <iostream>
#include <algorithm>
#include <vector>

bool issame(std::vector<int> a,std::vector<int> b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<int> lst;
    int num;
    while(std::cin >> num) {
        lst.push_back(num);
    }
    std::vector<int> result = strange_sort_list(lst);
    
    if(issame({1,2},result)) {
        for(auto i: result) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Not the same" << std::endl;
    }
    
    return 0;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        if (!lst.empty()) {
            int max_val = *std::max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}