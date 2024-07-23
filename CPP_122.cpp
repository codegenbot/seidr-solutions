#include <vector>
using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (log10(arr[i]) + 1 <= 2) {
            sum += arr[i];
        } else {
            break;
        }
    }
    return sum;
}

int main() {
    cout << add_elements({1}, 1) << endl;
    cout << add_elements({123, 45, 67, 78}, 4) << endl;
    cout << add_elements({10, 20, 30}, 3) << endl;
    return 0;
}