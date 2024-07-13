#include <vector>
using namespace std;

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> result;
    int rightmost = arr.back();
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    reverse(result.begin(), result.end());
    cout << "Leaders: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}