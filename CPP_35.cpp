```cpp
#include <algorithm>
#include <vector>
#include <cmath>

int main() {
    vector<float> l;
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++) {
        float x;
        cin >> x;
        l.push_back(x);
    }
    auto max_element = *std::max_element(l.begin(), l.end());
    cout << "Max element: " << max_element << endl;
    return 0;
}