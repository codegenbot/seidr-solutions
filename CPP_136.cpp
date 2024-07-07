#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result(2);
    int maxNeg = 0, minPos = std::numeric_limits<int>::max();
    
    for (int num : lst) {
        if (num < 0 && abs(num) > maxNeg) {
            maxNeg = abs(num);
        } else if (num > 0 && num < minPos) {
            minPos = num;
        }
    }
    
    result[0] = maxNeg > 0 ? maxNeg : 0;
    result[1] = minPos > 0 ? minPos : 0;
    
    return result;
}