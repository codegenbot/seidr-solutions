#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int num;
    std::vector<int> lst;
    
    // read input
    while(std::cin >> num) {
        lst.push_back(num);
    }

    std::vector<int> result = strange_sort_list(lst);

    if(issame(lst, result)) {
        for(int i : result) std::cout << i << " ";
    } else {
        std::cout << "Error: Lists are not the same.\n";
    }
    
    return 0;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        if (!lst.empty())
            result.push_back(max_val);
        lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
    }
    return result;
}