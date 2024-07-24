#include <vector>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result = {0, 0};

    bool hasNegative = false;
    int maxNegative = INT_MIN;
    bool hasPositive = false;
    int minPositive = INT_MAX;

    for (int num : lst) {
        if (num < 0) {
            hasNegative = true;
            maxNegative = max(maxNegative, num);
        } else if (num > 0) {
            hasPositive = true;
            minPositive = min(minPositive, num);
        }
    }

    result[0] = hasNegative ? maxNegative : 0;
    result[1] = hasPositive ? minPositive : 0;

    return result;
}