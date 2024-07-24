#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    if (n == 0) return result; 
    int lastLeader = arr[n-1];
    result.push_back(lastLeader);
    
    for(int i = n-2; i >= 0; --i) {
        if(arr[i] >= lastLeader) {
            lastLeader = arr[i];
            result.push_back(lastLeader);
        }
    }
    
    return vector<int>(result.rbegin(), result.rend());
}

int main() {
    vector<int> input = {5, 2, 3, 4}; 
    vector<int> result = leaders(input);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}