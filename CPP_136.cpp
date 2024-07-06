#include <vector>

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result(2);
    
    int maxNeg = 0;
    int minPos = INT_MAX;

    for (int i : lst) {
        if (i < 0 && i > maxNeg) {
            maxNeg = i;
        } else if (i > 0 && i < minPos) {
            minPos = i;
        }
    }

    result[0] = maxNeg;
    result[1] = minPos;

    return result;
}