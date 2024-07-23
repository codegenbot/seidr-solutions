#include <vector>
using namespace std;

int main() {
    vector<int> arr = {17, 28, 4, 2, 3};
    vector<int> leaders;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            leaders.push_back(arr[i]);
            rightmost = arr[i];
        }
    }
    cout << "Leaders are: ";
    for (auto x : leaders) {
        cout << x << " ";
    }
    return 0;
}