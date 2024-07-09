#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a) {
    return std::equal(a.begin(), a.end());
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::remove_if(lst.begin(), lst.end(), [](const std::string& s){ return s.length() % 2; });
    lst.erase(it, lst.end());
    std::sort(lst.begin(), lst.end());
    return lst;
}

int main() {
    int n; 
    std::cin >> n;
    
    std::vector<std::string> lst(n);
    
    for(int i = 0; i < n; i++) {
        std::cin >> lst[i];
    }
    
    std::vector<std::string> result = sorted_list_sum(lst);
    
    cout << "Sorted List Sum: ";
    for(auto str : result) {
        cout << str << " ";
    }
    cout << endl;
    
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"})) == true); 

    return 0;
}