```cpp
#include <iostream>
#include <vector>

bool below_threshold(vector<int> l, int t) {
    for (int x : l) {
        if (x >= t)
            return false;
    }
    return true;
}

int main() {
    vector<int> l;
    int t;
    
    cout << "Enter numbers (enter -1 to stop): ";
    while(true) {
        cin >> t;
        if(t == -1) break;
        l.push_back(t);
    }
    
    if(below_threshold(l, 5)) 
        cout << "All elements are below threshold." << endl;
    else
        cout << "There is at least one element above the threshold." << endl;
    
    return 0;
}