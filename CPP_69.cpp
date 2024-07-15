#include <vector>
#include <algorithm>
using namespace std;

int search(std::vector<int> lst) {
    int res = -1;
    for (int num : lst) {
        if (num > 0 && count(lst.begin(), lst.end(), num) >= num) {
            res = max(res, num);
        }
    }
    return res;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
}