#include <vector>
using namespace std;

int can_arrange(vector<int> arr);

int main() {
    vector<int> arr = {2, 3, 1};
    assert(can_arrange(arr) == 0);
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