#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> unique(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

int main() {
    std::vector<int> input1 = {1, 2, 1, 3, 2, 4, 3, 5};
    std::vector<int> output1 = {1, 2, 3, 4, 5};
    assert(std::equal(unique(input1).begin(), unique(input1).end(), output1.begin()));

    std::vector<int> input2 = {4, 4, 3, 3, 2, 2, 1, 1};
    std::vector<int> output2 = {1, 2, 3, 4};
    assert(std::equal(unique(input2).begin(), unique(input2).end(), output2.begin()));

    std::vector<int> input3 = {5, 5, 5, 5, 5};
    std::vector<int> output3 = {5};
    assert(std::equal(unique(input3).begin(), unique(input3).end(), output3.begin()));

    std::vector<int> input4 = {1, 2, 3, 4, 5};
    std::vector<int> output4 = {1, 2, 3, 4, 5};
    assert(std::equal(unique(input4).begin(), unique(input4).end(), output4.begin()));

    assert(std::equal(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}).begin(), unique({5, 3, 5, 2, 3, 3, 9, 0, 123}).end(), std::vector<int>{0, 2, 3, 5, 9, 123}.begin()));

    return 0;
}