#include <vector>
#include <algorithm>

int main() {
    vector<float> l;
    cout << "Enter numbers (space-separated): ";
    for(float x; cin >> x) l.push_back(x);
    return *max_element(l.begin(), l.end());
}