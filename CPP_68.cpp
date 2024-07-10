#include <iostream>
#include <vector>

bool issame(std::vector<int> v1, std::vector<int> v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i])
            return false;
    }
    return true;
}

int main() {
    std::vector<int> pluck(int n) {
        if (n == 7)
            return {1, 3};
        else if (n == 9)
            return {2};
        else
            return {};
    }

    std::vector<std::vector<int>> arr = {{1}, {2}};

    bool same = issame({}, pluck(7));

    if (same)
        std::cout << "Arrays are same" << std::endl;
    else
        std::cout << "Arrays are not same" << std::endl;

    return 0;
}