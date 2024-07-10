```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getMax(int n) {
    vector<pair<int,int>> l;
    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        l.push_back({x,0});
    }

    return std::max_element(l.begin(), l.end())->first;
}

int main() {
    // Your test code
}