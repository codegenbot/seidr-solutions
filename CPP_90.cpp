#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int nextSmallest(int lst[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (lst[i] != lst[i+1]) {
            return lst[i];
        }
    }
    return -1;
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
    if(lst.size() < 2) 
        cout << "-1";
    else {
        sort(lst.begin(), lst.end());
        cout << nextSmallest(&lst[0], lst.size());
    }
}