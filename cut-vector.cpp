#include <vector>
using namespace std;

vector<int> cutVector(vector<int> arr) {
    int n = arr.size();
    int minDiff = INT_MAX;
    int index = 0;

    for (int i = 1; i <= n/2; ++i) {
        int diff = abs(arr[i] - arr[0]);
        if (diff < minDiff)
            minDiff = diff, index = i;
    }

    return {vector<int>(arr.begin(), arr.begin() + index), vector<int>(arr.begin() + index, arr.end())};
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    vector<int> res = cutVector(arr);

    cout << "Left Vector: ";
    for (int num : res[0])
        cout << num << " ";
    cout << endl;

    cout << "Right Vector: ";
    for (int num : res[1])
        cout << num << " ";
    cout << endl;

    return 0;
}