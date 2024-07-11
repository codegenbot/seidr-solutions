#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    for (int i = n - 1; i >= 0; --i) {
        bool isLeader = true;
        for (int j = i + 1; j < n; ++j) {
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
    // test the code
    vector<int> arr1 = {0};
    vector<int> result1 = leaders(arr1);
    for (auto &i : result1) cout << i << " ";
    cout << endl;

    vector<int> arr2 = {1, 0};
    vector<int> result2 = leaders(arr2);
    for (auto &i : result2) cout << i << " ";
    cout << endl;

    vector<int> arr3 = {1, 451};
    vector<int> result3 = leaders(arr3);
    for (auto &i : result3) cout << i << " ";
    cout << endl;

    vector<int> arr4 = {2, 1000, 0};
    vector<int> result4 = leaders(arr4);
    for (auto &i : result4) cout << i << " ";
    cout << endl;

    vector<int> arr5 = {2, 0, 1000};
    vector<int> result5 = leaders(arr5);
    for (auto &i : result5) cout << i << " ";
    cout << endl;
    
    return 0;
}