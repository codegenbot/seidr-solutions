#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> result(l.begin(), unique_copy(l.begin(), unique(l.end())));
    sort(result.begin(), result.end());
    cout << "{";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
    return 0;
}