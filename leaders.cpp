```c++
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    for (int i = n - 1; i >= 0; i--) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) leaders.push_back(arr[i]);
    }
    
    return leaders;
}

int main() {
    vector<int> input = {1, 3, 4, 2, 5}; 
    vector<int> output = leaders(input);
    for (int leader : output) {
        cout << leader << " "; 
    }
    return 0;
}