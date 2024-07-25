#include <vector>
using namespace std;

int findFirstNegativeIndex(const vector<int>& arr) {
    int total = 0;
    for (int i = 0; i < arr.size(); i++) {
        total += arr[i];
        if (total < 0)
            return i;
    }
    return -1; // not found
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        input.push_back(val);
    }
    cout << findFirstNegativeIndex(input) << endl;
    return 0;
}