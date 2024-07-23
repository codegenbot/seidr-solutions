#include <vector>
using namespace std;

int search(vector<int> lst) {
    int max = 0;
    for (auto i : lst) {
        if (i > 0 && i >= count(lst.begin(), lst.end(), i)) {
            return i;
        }
        if (count(lst.begin(), lst.end(), i) > max) {
            max = count(lst.begin(), lst.end(), i);
        }
    }
    return -1;
}