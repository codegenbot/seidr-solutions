```cpp
#include <algorithm>
#include <vector>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<int> strange_sort_list(std::initializer_list<int> lst) {
    std::vector<int> result;
    if (lst.size() == 0) return result;

    std::vector<int> temp(lst);
    std::sort(temp.begin(), temp.end());
    
    for(auto i : lst){
        result.push_back(i);
    }

    return result;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}