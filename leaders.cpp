#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    int maxRight = arr[n-1];
    leaders.push_back(maxRight);
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders.push_back(maxRight);
        }
    }
    return leaders;
}

int main() { leaders(vector<int>{}); return 0; }