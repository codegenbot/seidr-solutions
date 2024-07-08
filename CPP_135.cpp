#include <vector>
#include <assert.h>
using namespace std;

int can_arrange(vector<int> arr) {
    int result = -1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i-1]) {
            result = i;
            break;
        }
    }
    return result;
}

int main() {
    assert(can_arrange({}) == -1);
    vector<int> arr1 = {1, 3, 6};
    assert(can_arrange(arr1) == 2);
    vector<int> arr2 = {1, 2, 3, 4, 5};
    assert(can_arrange(arr2) == 0);
    return 0;
}