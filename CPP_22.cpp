```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<int> v = {3, 'c', 3, 3, 'a', 'b'};
    std::vector<int> filter_integers(std::vector<int> input) {
        std::vector<int> result;
        for(int i : input) {
            if (std::isalnum(i)) {
                result.push_back(i);
            }
        }
        return result;
    }

    assert(issame(filter_integers(v), {3, 3, 3}));
}