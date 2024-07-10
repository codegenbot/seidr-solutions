Here is the completed code:

#include <vector>
using namespace std;

int basement(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1; // not found
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        input.push_back(x);
    }
    cout << basement(input) << endl;
    return 0;
}