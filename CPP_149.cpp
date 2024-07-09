#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> sorted_list_sum(std::vector<std::string>& lst) {
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
    int sum = 0;
    for(const auto& s : lst) {
        sum += stoi(s);
    }
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
    int total_sum = 0;
    for(auto str : result) {
        total_sum += stoi(str);
        cout << str << " ";
    }
    cout << endl;
    cout << "Total Sum: " << total_sum << endl;
    
    return 0;
}