#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    int maxRightSoFar = arr[n-1];
    leaders.push_back(maxRightSoFar);
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRightSoFar) {
            maxRightSoFar = arr[i];
            leaders.push_back(maxRightSoFar);
        }
    }
    return leaders;
}

int main() { leaders(vector<int>{}); return 0; }