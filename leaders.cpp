```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for (int i = 0; i < n; i++) {
        bool leader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if (leader) res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    vector<int> testArr = {16, 17, 4, 3, 5, 2, 8, 9};
    vector<int> leadersArr = leaders(testArr);
    
    for (int i : leadersArr) {
        cout << i << " ";
    }
    
    return 0;
}