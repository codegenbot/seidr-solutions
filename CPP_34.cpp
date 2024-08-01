#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<int> unique(vector<int> l){
    vector<int> result(l.begin(), end(l));
    std::unique(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> a = {1, 2, 3, 4, 5};
    std::vector<int> b = {1, 2, 3, 4, 5};
    if (issame(a, b))
        std::cout << "Vectors are the same." << std::endl;
    else
        std::cout << "Vectors are different." << std::endl;

    return 0;
}