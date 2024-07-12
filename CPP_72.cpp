```cpp
#include <iostream>
#include <vector>
using namespace std;

bool will_it_fly(vector<vector<int>> q, int w) {
    if(w >= (q[0][1] - q[0][0]) && w >= (q[1][1] - q[1][0])) {
        return true;
    } else {
        return false;
    }
}

int main() {
    vector<vector<int>> q(n);  // Initialize q with n vectors of int
    int n;  
    cin >> n;
    for(int i=0; i<n; i++) {
        int x, y; 
        cin >> x >> y;
        q[i].push_back({x,y});
    }
    int w;
    cin >> w;
    if (!will_it_fly(q, w)) {
        cout << "Will not fly.\n";
    } else {
        cout << "Will fly.\n";
    }
    return 0;
}