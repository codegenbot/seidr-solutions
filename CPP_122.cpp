#include <vector>

using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < min(k, (int)arr.size()); i++) {
        if ((long)abs(arr[i]) <= 99) {
            sum += arr[i];
        } else {
            break;
        }
    }
    return sum;
}