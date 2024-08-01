#include <vector>
#include <algorithm>
#include <cassert>

int search(const vector<int>& lst) {
    int result = -1;
    for (size_t i = 0; i < lst.size(); ++i) {
        int num = lst[i];
        int freq = std::count(lst.begin(), lst.end(), num);
        if (num > 0 && freq >= num && num > result) {
            result = num;
        }
    }
    return result;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
}