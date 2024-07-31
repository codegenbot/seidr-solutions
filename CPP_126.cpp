#include <vector>
bool is_sorted(std::vector<int> lst);
// ... rest of the code ...
bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] <= lst[i - 1]) {
            return false;
        }
    }
    int count = 0;
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] == lst[i + 1]) {
            count++;
            if (count > 1) {
                return false;
            }
        }
    }
    return true;
}