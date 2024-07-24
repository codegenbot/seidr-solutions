```
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    int maxRight = arr[n-1];
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= maxRight) {
            leaders.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    return leaders;
}

int main() { leaders(vector<int>{}); return 0; }