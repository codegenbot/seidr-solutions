Here is the corrected code:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::string str1, std::string str2) {
    if(str1.length() != str2.length()) return false;
    for(int i = 0; i < str1.length(); i++) {
        if(str1[i] != str2[i]) return false;
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string>& lst) {
    std::sort(lst.begin(), lst.end());
    int sum = 0;
    for(int i = 0; i < lst.size(); i++) {
        if(i == 0 || !issame(lst[i-1], lst[i])) sum += lst[i].length();
    }
    std::vector<std::string> result;
    for(int i = 0; i < lst.size(); i++) {
        if(!issame(lst[i-1], lst[i])) result.push_back(lst[i]);
    }
    return result;
}

int main() 
{ 
    int n; 
    std::cin >> n;
    
    std::vector<std::string> lst;
    
    for(int i = 0; i < n; i++) {
        std::cin >> lst.push_back(std::string);
    }
    
    std::vector<std::string> result = sorted_list_sum(lst);
    
    std::cout << "Sorted List Sum: ";
    for(auto str : result) {
        std::cout << str << " ";
    }
    std::cout << endl;
    
    return 0;
}