#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> generate_integers(int start, int end)
{
    std::vector<int> result;
    for (int i = start; i <= end; i++) {
        result.push_back(i);
    }
    return result;
}

int main() {
    std::vector<int> emptyVector;
    bool same = issame(generate_integers(17, 89), emptyVector);
    std::cout << same << std::endl;
    return 0;
}