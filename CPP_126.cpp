#include <vector>
#include <algorithm>

bool is_sorted(const std::vector<int>& lst) {
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] >= lst[i - 1]) continue;
        return false;
    }
    return true;
}

int main() {
    // your code here
    return 0;
}