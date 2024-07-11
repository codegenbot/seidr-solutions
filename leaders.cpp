#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    if(n == 0)
        return result;
    
    int lastLeaderIndex = -1;
    for(int i=n-1; i>=0; i--) {
        if(i == n-1 || arr[i] >= arr[lastLeaderIndex])
            result.push_back(arr[i]);
        else
            lastLeaderIndex = i;
    }
    return result;
}

int main() { leaders(vector<int>()); return 0; }