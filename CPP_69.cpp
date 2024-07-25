#include <vector>
#include <algorithm>
using namespace std;

int search(vector<int> lst) {
    int max = 0;
    for (int i : lst) {
        if (i > 0 && i >= count(i, begin(lst), end(lst))) {
            max = i;
        }
    }
    return max == 0 ? -1 : max;
}