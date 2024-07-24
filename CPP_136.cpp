#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int max = 0, minPos = INT_MAX, maxNeg = INT_MIN;
    
    for (int i : lst) {
        if (i > 0 && i < minPos) minPos = i;
        else if (i < 0 && i > maxNeg) maxNeg = i;
    }
    
    return vector<int>({maxNeg, minPos});
}