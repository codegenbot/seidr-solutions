#include <vector>
using namespace std;

int can_arrange(vector<int> arr);

int main() {
    vector<int> arr = {3, 4, 2};
    cout << "The index at which the sequence becomes unarranged is: " << can_arrange(arr) << endl;
    return 0;
}

int can_arrange(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i - 1;
        }
    }
    return -1;
}