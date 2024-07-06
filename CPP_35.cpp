#include <algorithm>
#include <vector>

int findMaxAbs(vector<int> l) {
    return abs(*max_element(l.begin(), l.end()));
}

int main() {
    vector<int> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    cout << findMaxAbs(l) << endl;
}