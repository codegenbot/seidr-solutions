#include <vector>
using namespace std;

int search(vector<int> lst) {
    int max = 0;
    for (auto i : lst) {
        if (i > 0 && i >= count(i, lst)) {
            return i;
        }
        if (count(i, lst) > max) {
            max = count(i, lst);
        }
    }
    return -1;
}