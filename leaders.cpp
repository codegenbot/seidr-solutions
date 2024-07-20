#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int rightmostLeader = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= rightmostLeader) {
            rightmostLeader = arr[i];
            result.push_back(rightmostLeader);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersArr = leaders(arr);
    for (int leader : leadersArr) {
        cout << leader << endl;
    }
    return 0;
}