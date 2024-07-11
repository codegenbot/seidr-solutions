#include <vector>

using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < min(k, arr.size()); i++) {
        if (to_string(arr[i]).length() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}