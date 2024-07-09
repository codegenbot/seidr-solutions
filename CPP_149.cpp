#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(b.size() != a.size()) return false;
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::remove_if(lst.begin(), lst.end(), [](const std::string& s){ return (stoi(s) % 2); });
    lst.erase(it, lst.end());
    std::sort(lst.begin(), lst.end());
    return lst;
}

int main() {
    int n; 
    std::cin >> n;
    
    std::vector<std::string> lst;
    
    for(int i = 0; i < n; i++) {
        std::cin >> lst.push_back(std::to_string(i+1));
    }
    
    std::vector<std::string> result = sorted_list_sum(lst);
    
    cout << "Sorted List Sum: ";
    for(auto str : result) {
        cout << str << " ";
    }
    cout << endl;
    
    return 0;
}