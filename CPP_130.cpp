#include <vector>
#include <cassert>

std::vector<int> completeCode(int n) {
    std::vector<int> res;
    if (n == 0) {
        res.push_back(0);
        return res;
    }
    res.push_back(3);
    int a = 1, b = 3, c = 2;
    for (int i = 1; i < n; ++i) {
        if (i % 2 == 0) {
            c = 1 + i / 2;
        } else {
            c = a + b + c;
        }
        res.push_back(c);
        a = b;
        b = c;
    }
    return res;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(completeCode(1), {1, 3}));
    
    return 0;
}