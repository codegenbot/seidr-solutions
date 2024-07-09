Here is the modified code:

```c++
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::remove_if(lst.begin(), lst.end(), [](const std::string& s){ return s.length() % 2; });
    lst.erase(it, lst.end());
    std::sort(lst.begin(), lst.end());
    return lst;
}

int main()
{
    int n; 
    std::cin >> n;
    
    std::vector<std::string> lst;
    
    for(int i = 0; i < n; i++) {
        std::cin >> lst.push_back(std::to_string(i));
    }
    
    std::vector<std::string> result = sorted_list_sum(lst);
    
    std::cout << "Sorted List Sum: ";
    for(auto str : result) {
        std::cout << str << " ";
    }
    std::cout << endl;
    
    return 0;
}