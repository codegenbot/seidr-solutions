#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int getMax(int n) {
    vector<int> l;
    int numElements;

    cout << "Enter the number of elements: ";
    cin >> numElements;

    for (int i = 0; i < numElements; i++) {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        l.push_back(x);
    }

    return *max_element(l.begin(), l.end());
}

int main() {
    assert(abs(getMax(0) - 124) < 1e-4);

    return 0;
}