#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> result;
    int k = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            for (int j = i; j < l.size() && j % 3 == 0; j++) {
                result.push_back(l[j]);
            }
            std::sort(result.begin(), result.end());
            k += (result.size() - (l.size() / 3));
        } else if (k % 3 != 0) {
            result.push_back(l[i]);
            k++;
        }
    }
    return result;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {1, 2, 3, 4, 5, 6, 8, 9}));
    return 0;
}