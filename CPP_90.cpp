```cpp
#include <iostream>
#include <vector>
using namespace std;

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
        int next_smallest = -1;
        for(int i = 0; i < lst.size()-1; i++){
            if(lst[i] != lst[i+1]) {
                next_smallest = lst[i];
                break;
            }
        }
        cout << (next_smallest == -1 ? "-1" : to_string(next_smallest));
    }
}