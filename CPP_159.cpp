#include <vector>
#include <algorithm>

std::vector<int> eat(int a, int b, int c) {
    std::vector<int> result;
    for (int i = 0; i < a + b + c; ++i) {
        if (i < a)
            result.push_back(i);
        else if (i >= a && i < a + b)
            result.push_back(a + b - 1);
        else
            result.push_back(c - 1);
    }
    return result;
}

bool areSameVectors(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); ++i)
        if (v1[i] != v2[i])
            return false;
    return true;
}

int main() {
    assert(areSameVectors(eat(4, 5, 1), std::vector<int>({9,0})));
    return 0;
}