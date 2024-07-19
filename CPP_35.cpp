#include <algorithm>
#include <vector>
#include <cmath>

int main() {
    vector<float> l;
    cout << "Enter the numbers (separated by space): ";
    for (float x; cin >> x;) {
        l.push_back(abs(x));
    }
    sort(l.begin(), l.end());
    cout << "The maximum element is: " << *max_element(l.begin(), l.end()) << endl;
    return 0;
}