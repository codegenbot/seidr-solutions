```cpp
#include <iostream>
#include <vector>
using namespace std;

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1;
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    int second_smallest = (copy.size() > 1)? copy[1] : -1; 
    return second_smallest;
}

int main() {
    int n;
    cin >> n;
    vector<int> lst(n);
    for(int i=0; i<n; i++) {
        cin >> lst[i];
    }
    cout << next_smallest(lst) << endl;
    return 0;
}