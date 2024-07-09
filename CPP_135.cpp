#include<bits/stdc++.h>
using namespace std;

int can_arrange(vector<int> arr){
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] <= arr[i-1])
            return i;
    }
    return -1;
}

int main(){
    vector<int> arr;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << can_arrange(arr) << endl;
}