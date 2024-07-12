```cpp
#include <iostream>
#include <vector>

bool will_it_fly(std::vector<std::vector<int>>& q, int w) {
    // Your logic goes here to determine if the plane will fly.
}

int main() {  
    int n;  
    cin >> n;
    std::vector<std::vector<int>> q(n);  
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