```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
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
        bool same = true;
        for(int i = 0; i < lst.size() - 1; i++){
            if(lst[i] != lst[i+1]) {
                cout << lst[i];
                same = false;
                break;
            }
        }
        if(same) cout << "-1";
    }
    return 0;
}