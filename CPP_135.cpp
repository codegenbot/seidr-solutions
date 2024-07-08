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
    vector<int> a = {1, 2, 3};
    cout << can_arrange(a) << endl; 
    a = {1, 2, 4};
    cout << can_arrange(a) << endl;
    return 0;
}