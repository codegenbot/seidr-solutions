```c++
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int maxRight = arr[n-1];
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 2, 7};
    vector<int> leadersVector = leaders(arr);
    for(int i : leadersVector) {
        cout << i << " ";
    }
    return 0;
}