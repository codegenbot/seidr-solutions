#include <vector>
using namespace std;
int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (to_string(arr[i]).length() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}
int main() {
    assert(add_elements({1}, 1) == 1);
    return 0;
}