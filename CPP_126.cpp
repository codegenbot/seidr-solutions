```cpp
#include <iostream>
#include <vector>
using namespace std;

bool is_sorted(vector<int> lst);

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    vector<int>::iterator it;
    for(it = unique(lst.begin(), lst.end()); it != lst.end(); ++it){
        if(std::distance(it, lst.end()) > 1)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> lst(n);
    for(int i = 0; i < n; i++){
        cin >> lst[i];
    }
    if(is_sorted(lst))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}