#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

std::vector<int> unique(std::vector<int> l){
    std::vector<int> result(l.begin(), l.end());
    std::sort(result.begin(), result.end());
    for (auto it = result.begin(); it != --result.end(); ++it) {
        if (std::distance(it, --end()) == 1 || *it != *(it-1))
            *it = *it;
        else
            break;
    }
    return result;
}

int main() {
    std::vector<int> l = {1,2,3,4,5};
    std::cout << "Original Vector: ";
    for (auto it = l.begin(); it != l.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    
    std::vector<int> unique_l = unique(l);
    std::cout << "Unique Vector: ";
    for (auto it = unique_l.begin(); it != unique_l.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    return 0;
}