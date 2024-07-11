#include <vector>
#include <utility>

int main() {
    assert(issueSame({1,2,3,5}, {-1,2,3,4}) == std::make_pair(0, 1)); 
    return 0;
}

std::pair<int, int> issueSame(vector<int> a, vector<int> b) {
    int index = -1;
    for (int i = 0; i < a.size() && i < b.size(); i++) {
        if (a[i] != b[i]) {
            return std::make_pair(i, i);
        }
    }
    return std::make_pair(index, index);
}