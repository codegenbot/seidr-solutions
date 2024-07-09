#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    int rightmostLeader = arr[n-1];
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= rightmostLeader) {
            rightmostLeader = arr[i];
            result.push_back(rightmostLeader);
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 3, 2, 3, 1};
    vector<int> leaders = leaders(arr);
    for (int i : leaders) {
        cout << i << " ";
    }
    return 0;
}