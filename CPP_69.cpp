#include <vector>
using namespace std;

int search(vector<int> lst) {
    int max = 0;
    for (auto num : lst) {
        if (num > max && count(lst.begin(), lst.end(), num) >= num) {
            max = num;
        }
    }
    return max == 0 ? -1 : max;
}