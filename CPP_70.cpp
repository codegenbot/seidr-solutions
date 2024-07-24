```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        if (min_val == max_val) {
            result.push_back(min_val);
            lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
        } else {
            for(int i = 0; i < 2; ++i){
                if(i==0)
                    result.push_back(min_val);
                else
                    result.push_back(max_val);
                if (min_val == max_val) {
                    lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
                } else {
                    lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
                    lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
                }
            }
        }
    }
    return result;
}

int main() {
    assert(issame(strange_sort_vector({111111}), {111111}));
    return 0;
}