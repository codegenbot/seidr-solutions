#include <vector>
using namespace std;

int search(vector<int> lst) {
    int max = -1;
    for (auto num : lst) {
        if (num > 0 && num <= count(lst.begin(), lst.end(), num)) {
            max = num;
        }
    }
    return max;
}