#include <initializer_list>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result;
    for(int i = 0; i < k; i++){
        if(arr.size() == 0)
            break;
        auto it = std::max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;
}

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(same(maximum({1, 2, 3, -23, 243, -400, 0}, 5), {243, 2, 3, 1, 0}));
    return 0;
}