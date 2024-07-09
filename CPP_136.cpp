```
#include <climits>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int maxNeg = INT_MAX, minPos = 0;
    for (int num : lst) {
        if (num < 0 && num < maxNeg) maxNeg = num;
        if (num > 0 && num < minPos) minPos = num;
    }
    return {(maxNeg >= 0 ? 0 : maxNeg), (minPos <= 0 ? 0 : minPos)};
}