#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> lst;
    while(n--) {
        int x;
        std::cin >> x;
        lst.push_back(x);
    }

    vector<int> result = strange_sort_list(lst);

    if(result.size() < 2) {
        std::cout << "No valid array" << std::endl;
    } else {
        for(auto i : result) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
        for(int i = 0; i < lst.size() -1; i++) {
            if(lst[i] > lst[i+1]) {
                std::cout << "Not valid array" << std::endl;
                return 0;
            }
        }
    }

    return 0;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}