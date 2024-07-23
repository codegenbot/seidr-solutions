#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            leaders.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    leaders.push_back(arr.back());
    return leaders;
}

int main() {
    vector<int> arr = {17, 28, 4, 27, 29, 23, 12};
    cout << "Array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    vector<int> leadersResult = leaders(arr);
    cout << "Leaders: ";
    for (int x : leadersResult) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}