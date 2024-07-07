```cpp
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst) {
    for(int i = 1; i < lst.size(); i++) {
        if(lst[i-1] >= lst[i]) {
            vector<int> v;
            for(int j = 0; j < i; j++) {
                v.push_back(lst[j]);
            }
            if(count(v.begin(), v.end(), lst[i]) > 1) {
                return false;
            }
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    return 0;
}