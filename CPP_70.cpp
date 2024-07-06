#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> main(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    std::vector<int> minMax;
    for (int i = 0; i < lst.size(); i++) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        if (i % 2 == 0) {
            result.push_back(minVal);
            lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
        } else {
            result.push_back(maxVal);
            lst.erase(std::remove(lst.begin(), lst.end(), maxVal), lst.end());
        }
    }

    return result;
}

int main() {
    assert(main({111111}) == std::vector<int>({111111}));
    return 0;
}