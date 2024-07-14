#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    int rightmost = arr.back();
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            leaders.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> arr = {17, 28, 4, 27, 29, 31};
    vector<int> leaders = leaders(arr);
    for (int leader : leaders) {
        cout << leader << " ";
    }
    return 0;
}