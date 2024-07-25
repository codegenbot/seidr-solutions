#include <vector>
using namespace std;

int basement(vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    // Read input
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate the basement index
    int result = basement(arr);

    // Print output
    cout << result << endl;

    return 0;
}