#include<vector>
#include<climits>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst){
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
    
    return {maxNeg, minPos};
}