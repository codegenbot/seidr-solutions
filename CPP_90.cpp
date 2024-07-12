#include<bits/stdc++.h>
using namespace std;

bool is_next_smaller(int x, vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < x) return true;
    }
    return false;
}

int main(){
    vector<int> lst;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " integers: ";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        lst.push_back(x);
    }
    if(lst.size() < 2) cout << "-1";
    else {
        sort(lst.begin(), lst.end());
        for(int i = 0; i < lst.size(); i++){
            if(is_next_smaller(lst[i], lst)) {
                cout << lst[i];
                break;
            }
        }
        else cout << "-1";
    }
}