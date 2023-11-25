#include <iostream>
#include <vector>
using namespace std;

vector<int> findLeaders(vector<int> arr) {
    vector<int> leaders;
    int n = arr.size();
    int maxRight = arr[n-1];
    leaders.push_back(maxRight);
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders.push_back(maxRight);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    vector<int> result = findLeaders(arr);
    cout << result.size() << endl;
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}