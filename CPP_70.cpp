#include <vector>
#include <algorithm>
#include <initializer_list>
#include <iostream>

bool isSameVector(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> strange_sort_list(std::initializer_list<int> lst) {
    std::vector<int> result(lst);
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    std::vector<int> result = strange_sort_list({111111});
    if (isSameVector(result, {11111})) {
        std::cout << "Output is correct.\n";
    } else {
        std::cout << "Output is incorrect.\n";
    }
    return 0;
}