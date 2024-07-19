#include <vector>
#include <algorithm>

bool is_sorted(vector<int> lst) {
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] <= lst[i - 1]) return false;
    }
    vector<int> temp(lst.begin(), lst.end());
    sort(temp.begin(), temp.end());
    for (int i = 0; i < lst.size(); i++) {
        if (temp[i] != lst[i]) return false;
    }
    return true;

}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    
}