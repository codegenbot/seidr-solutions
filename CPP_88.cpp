#include <algorithm>
#include <vector>

bool areEqual(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) return array;

    int sum = std::accumulate(array.begin(), array.end(), 0);
    bool isOdd = (sum % 2 != 0);

    std::vector<int> result = array;
    std::sort(result.begin(), result.end());
    if (isOdd) std::stable_partition(result.begin(), result.end(), [](int x){return x < 0;});
    else std::stable_partition(result.begin(), result.end(), [](int x){return x > 0;});

    return result;
}

int main() {
    assert(areEqual(sort_array({21, 14, 23, 11}) , {23, 21, -14, -11}));
    return 0;
}