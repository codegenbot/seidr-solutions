#include <vector>
using namespace std;

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    int n = arr.size();
    vector<int> result;
    int rightmost = arr.back();
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    reverse(result.begin(), result.end());
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}