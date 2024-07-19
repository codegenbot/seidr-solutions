#include <algorithm>
#include <vector>
#include <cmath>

int main() {
    vector<float> l;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        float x;
        cout << "Enter element " << (i+1) << ": ";
        cin >> x;
        l.push_back(x);
    }

    vector<float>::iterator it = max_element(l.begin(), l.end());
    cout << "The maximum value is: " << *it << endl;

    return 0;
}