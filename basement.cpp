#include <vector>
using namespace std;

int basementIndex(vector<int> arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1; // or any other value to indicate that no such index exists
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << basementIndex(arr) << endl;
    return 0;
}