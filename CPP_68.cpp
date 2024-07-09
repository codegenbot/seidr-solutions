#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::pair<int, int>> pluck(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    if (minIndex != -1) {
        result.push_back({minEven, minIndex});
    }

    return result;
}

int main() {
    assert(std::equal(pluck({7, 9, 7, 1}), {}));
    return 0;
}