#include <vector>
using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < min(k, arr.size()); i++) {
        if (arr[i] <= 9) {
            sum += arr[i];
        } else if (arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}