#include <bits/stdc++.h>
using namespace std;

int findFirst Duplicate(int arr[], int n) {
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        if(mp.find(arr[i]) != mp.end())
            return arr[i];
        else
            mp[arr[i]] = 1;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << findFirst Duplicate(arr, n) << endl;
}