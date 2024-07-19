#include <iostream>
#include <vector>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int maxNeg = 0, minPos = INT_MAX;
    
    for(int i : lst) {
        if(i < 0 && i > maxNeg)
            maxNeg = i;
        else if(i > 0 && i < minPos)
            minPos = i;
    }
    
    return {(maxNeg == 0)?0:maxNeg, (minPos == INT_MAX)?0:minPos};
}

int main() {
    vector<int> lst1 = {2, 4, 1, 3, 5, 7};
    vector<int> result1 = largest_smallest_integers(lst1);
    cout << "Largest smallest integers for " << endl;
    for(int i : result1) cout << i << " ";
    cout << endl;

    return 0;
}