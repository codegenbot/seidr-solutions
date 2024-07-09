#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

int search(const vector<int>& lst) {
    int result = -1;
    for (int num : lst) {
        if (num > 0 && count(lst.begin(), lst.end(), num) >= num) {
            result = max(result, num);
        }
    }
    return result;
}

int main() {
    assert(search(vector<int>{3, 10, 10, 9, 2}) == -1);
    return 0;
}