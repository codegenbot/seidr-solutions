#include <vector>
using namespace std;

int firstNegative(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for(int j = 0; j <= i; j++) {
            sum += arr[j];
            if(sum < 0)
                return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << firstNegative(arr) << endl;
    return 0;
}