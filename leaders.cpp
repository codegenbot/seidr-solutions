```cpp
#include <initializer_list>
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 1, 5};
    vector<int> leadersVector = leaders(arr);
    for (auto leader : leadersVector) {
        cout << leader << endl;
    }
    return 0;
}