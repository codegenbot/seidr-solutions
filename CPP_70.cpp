#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::vector<int> result;
    std::sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        result.push_back(lst[left++]);
        if (left <= right) {
            result.push_back(lst[right--]);
        }
    }
    return result;
}

int main(){
    int n;
    std::cin >> n;
    std::vector<int> lst(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> lst[i];
    }

    std::vector<int> result = strange_sort_list(lst);

    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    
    return 0;
}