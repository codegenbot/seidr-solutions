```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int maxRightSoFar = arr.back();
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= maxRightSoFar) {
            result.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }
    return result;
}

int main() {
    vector<int> arr = {17, 110, 2, 83, 45, 10};
    vector<int> leadersRes = leaders(arr);
    for (int leader : leadersRes) {
        cout << leader << " ";
    }
    return 0;
}