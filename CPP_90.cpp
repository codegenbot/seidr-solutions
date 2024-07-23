#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findSmallest(vector<int> lst) {
    vector<int> sorted(lst);
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2)
        return -1;
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    cout << "No distinct elements in the list." << endl;
    return -1;
}

int main() {
    int result = findSmallest({-35, 34, 12, -45});
    if (result == -1)
        cout << "Error: The input vector must contain at least two distinct elements.";
    else
        cout << result << endl;
    return 0;
}