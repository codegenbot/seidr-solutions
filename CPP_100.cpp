#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    vector<int> result;
    int count = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            result.push_back(count);
        else
            result.push_back(count + 1);
        count += (count % 2 == 0) ? 2 : 1;
    }
    return result;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}