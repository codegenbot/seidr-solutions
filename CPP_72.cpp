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
    vector<vector<int>> q;
    int n, x, y, w;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x >> y;
        q.push_back({x,y});
    }
    cin >> w;
    if (!will_it_fly(q, w)) {
        cout << "Will not fly.\n";
    } else {
        cout << "Will fly.\n";
    }
    return 0;
}