#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> result(vector<int> a);
int pluck(vector<int> a);

bool issame(vector<int> a,vector<int>b){
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int pluck(vector<int> a){
    vector<pair<int, int>> output;
    for(int i=0;i<a.size();i++){
        if(issame({a[i]}, {arr}) && arr.find(a[i])!=arr.end()){
            output.push_back(make_pair(a[i],distance(arr.begin(),find(arr.begin(),arr.end(),a[i]))));
        }
    }
    return 0;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<pair<int, int>> output = result(arr);
    for (auto p : output) {
        cout << "Number: " << p.first << ", Index: " << p.second << endl;
    }
    return 0;
}