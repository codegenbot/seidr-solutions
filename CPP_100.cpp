#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int pile[] = {8, 10, 12, 14, 16, 18, 20, 22};

bool checkPile(int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && pile[i] != i * 2 + 1) 
            return false;
        if (i % 2 != 0 && pile[i] != i * 2)
            return false;
    }
    return true;
}

int main() {
    assert(checkPile(8));
    return 0;
}