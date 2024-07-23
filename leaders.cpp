```c++
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int rightmost = arr.back();
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (i == arr.size() - 1 || arr[i] >= rightmost) {
            leaders.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 8, 9, 1};
    vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        cout << leader << " ";
    }
    return 0;
}