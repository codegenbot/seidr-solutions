#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    priority_queue<int> pq;
    for (int i : arr) {
        pq.push(i);
        if (pq.size() > k)
            pq.pop();
    }
    vector<int> result(k);
    for (int i = k - 1; i >= 0; --i)
        result[i] = pq.top(), pq.pop();
    return result;
}

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Enter k: ";
    cin >> k;
    vector<int> res = maximum(arr, k);
    if(res.size() == k) {
        cout << "The maximum of every k elements is: ";
        for (int i : res)
            cout << i << ' ';
        cout << endl;
    } else
        cout << "Array size less than or equal to k." << endl;
    return 0;
}