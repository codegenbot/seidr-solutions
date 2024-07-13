#include <iostream>
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    for (int i = n - 1; i >= 0; i--) {
        bool leader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if (leader) leaders.push_back(arr[i]);
    }
    return leaders;
}

int main() {
    vector<int> arr;
    int num;
    
    cout << "Enter numbers: ";
    while (cin >> num) {
        arr.push_back(num);
    }
    
    vector<int> leadersResult = leaders(arr);
    
    if (leadersResult.empty()) {
        cout << "No leader found." << endl;
    } else {
        cout << "Leaders are: ";
        for (int i : leadersResult) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}