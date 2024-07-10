#include <vector>
using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < min(k, arr.size()); i++) {
        if (log10(arr[i]) + 1 <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}