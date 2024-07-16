```c++
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersResult = leaders(arr);
    cout << "Leaders: ";
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    cout << endl;
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    int maxRightSoFar = arr.back();
    leaders.push_back(maxRightSoFar);
    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] >= maxRightSoFar) {
            leaders.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}