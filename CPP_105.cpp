#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string>b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<int> arr = {9, 4, 8};
    vector<string> result = by_length(arr);
    cout << issame(result , {"Nine", "Eight", "Four"}) << endl; // Output: 1
    return 0;
}