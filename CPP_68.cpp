#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> pluck(std::vector<int> arr) {
    vector<int> result;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            result.push_back(arr[i]);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), std::vector<int>{}));  
}