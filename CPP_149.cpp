#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::string& a, const std::string& b) {
    if(a.length() != b.length()) {
        return false;
    } else {
        for(int i = 0; i < a.length(); i++) {
            if(a[i] != b[i]) {
                return false;
            }
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    auto it = std::remove_if(lst.begin(), lst.end(), [](const std::string& s){ return s.length() % 2; });
    lst.erase(it, lst.end());
    std::sort(lst.begin(), lst.end(), 
        [](const std::string& a, const std::string& b){
            if(a.length() != b.length()) {
                return a.length() < b.length();
            } else {
                return a < b;
            }
        });
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
    
    return 0;
}