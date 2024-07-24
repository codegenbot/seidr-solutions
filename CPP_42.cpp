#include <vector>
#include <cassert>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> incr_list(std::vector<int> l) {
    for (int& num : l) {
        num++;
    }
    return l;
}

int main() {
    std::vector<int> testList = {1, 2, 3, 4, 5};
    std::vector<int> result = incr_list(testList);
    for (int i = 0; i < testList.size(); i++) {
        assert(issame(result[i], testList[i] + 1));
    }
    return 0;
}