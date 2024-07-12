```cpp
#include <algorithm>
#include <assert.h>
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

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            int j = i;
            while(j < l.size() && l[j] % 3 == 0) {
                j++;
            }
            std::vector<int> temp(l.begin() + i, l.begin() + j);
            std::sort(temp.begin(), temp.end());
            for (int k = 0; k < temp.size(); k++) {
                result.push_back(temp[k]);
            }
        } else {
            result.push_back(l[i]);
        }
    }
}

int main() { return 0; }