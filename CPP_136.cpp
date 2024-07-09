#include <iostream>
#include <vector>
#include <climits> // added include statement for INT_MAX
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int maxNeg = 0;
    int minPos = INT_MAX; // fixed use of INT_MAX

    for (int num : lst) {
        if (num < 0 && num > maxNeg) {
            maxNeg = num;
        } else if (num > 0 && num < minPos) {
            minPos = num;
        }
    }

    return {(maxNeg > 0) ? 0 : maxNeg, (minPos < 1) ? 0 : minPos};
}