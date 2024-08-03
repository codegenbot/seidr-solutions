```cpp
#include <vector>
#include <climits>
using namespace std;

pair<int, int> largest_smallest_integers(vector<int> lst){
    int maxNeg = 0;
    int minPos = INT_MAX;
    
    for(int i : lst) {
        if(i < 0 && i > maxNeg) {
            maxNeg = i;
        }
        else if(i > 0 && i < minPos) {
            minPos = i;
        }
    }
    
    return std::make_pair((maxNeg == 0)?0:maxNeg, (minPos == INT_MAX)?0:minPos);
}