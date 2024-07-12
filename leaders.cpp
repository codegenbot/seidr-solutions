```c++
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    if (n == 1) {
        return arr;
    }
    
    int maxRight = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 6, 8, 12};
    vector<int> leadersVec = leaders(arr);
    for (int leader : leadersVec) {
        cout << leader << endl;
    }
    return 0;
}