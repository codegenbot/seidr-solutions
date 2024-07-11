```
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    if(n==0)
        return result;
    int maxRightSoFar = arr[n-1];
    result.push_back(maxRightSoFar);
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRightSoFar) {
            maxRightSoFar = arr[i];
            result.push_back(maxRightSoFar);
        }
    }
    return result;
}

int main() { leaders(vector<int>()); return 0; }