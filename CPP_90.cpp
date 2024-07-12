#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

bool is_consecutive(const vector<int>& lst) {
    sort(lst.begin(), lst.end());
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] != lst[i + 1]) return false;
    }
    return true;
}

assert(is_consecutive({-35, 34, 12, -45}));

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
        for(int i = 0; i < lst.size() - 1; i++){
            if(lst[i] != lst[i+1]) {
                cout << lst[i];
                break;
            }
        }
        if(lst.size() > 1) cout << "-1";
    }
}