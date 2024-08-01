#include <iostream>
#include <vector>
#include <unordered_set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

std::vector<int> unique(std::vector<int> l){
    std::vector<int> result(l.begin(), l.end());
    std::unordered_set<int> seen(result.begin(), result.end());
    for (auto it = result.begin(); it != result.end();) {
        if (seen.count(*it)) {
            it = result.erase(it);
        } else {
            ++it;
        }
    }
    return result;
}

int main() {
    std::vector<int> l = {1, 2, 3, 4, 5};
    std::vector<int> unique_l = unique(l);
    
    if (issame(l, unique_l)) {
        for (const auto& num : unique_l) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Vectors are not the same." << std::endl;
    }

    return 0;
}