```c++
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 0) return result;
    
    int lastLeaderIndex = n - 1;
    result.push_back(arr[lastLeaderIndex]);
    
    for (int i = lastLeaderIndex; i >= 0; i--) {
        if (arr[i] >= arr[i + 1]) {
            result.push_back(arr[i]);
            lastLeaderIndex = i;
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 3, 2, 5};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    return 0;
}