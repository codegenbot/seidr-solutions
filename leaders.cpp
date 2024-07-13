```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int lastLeader = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= lastLeader) {
            lastLeader = arr[i];
            result.push_back(lastLeader);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {17, 11, 10, 12, 9, 1};
    vector<int> leadersRes = leaders(arr);
    // print or use the result as needed
    return 0;
}