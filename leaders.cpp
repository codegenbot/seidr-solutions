#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    if (n == 0) return leaders;
    int rightmost = arr.back();
    leaders.push_back(rightmost);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            leaders.push_back(rightmost);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(arr);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}