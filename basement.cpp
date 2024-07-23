#include <vector>
using namespace std;

int basement(vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum < 0) return i;
    }
    return -1;

}

int main() {
    vector<int> arr = {-3, -2, 6, -1, 1, 7};
    cout << basement(arr) << endl;
    return 0;
}