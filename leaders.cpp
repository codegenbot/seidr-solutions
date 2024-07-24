#include <vector>
#include <algorithm>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    if (n == 0) return result; 

    int lastLeader = arr[n-1];
    result.push_back(lastLeader);

    for(int i = n-2; i >= 0; --i) {
        if(arr[i] >= lastLeader) {
            lastLeader = arr[i];
            result.push_back(lastLeader);
        }
    }
    
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        arr.push_back(x);
    }
    vector<int> result = leaders(arr);
    cout << "The leaders in the array are: ";
    for(int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}