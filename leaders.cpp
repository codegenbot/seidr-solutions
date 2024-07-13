```c++
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 3, 2};
    vector<int> result = leaders(arr);
    cout << "Leaders: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}