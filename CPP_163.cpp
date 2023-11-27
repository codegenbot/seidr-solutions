#include <iostream>
#include <vector>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> integers;
    for (int num = a; num <= b; num++) {
        integers.push_back(num);
    }
    return integers;
}

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

int main() {
    return 0;
}