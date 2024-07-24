#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int search(const vector<int>& lst) {
    int result = -1;
    for (int num : lst) {
        if (num > 0 && count(lst.begin(), lst.end(), num) >= num) {
            result = std::max(result, num);
        }
    }
    return result;
}