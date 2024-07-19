#include <vector>
using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if ((arr[i] >= 10) && (arr[i] <= 99)) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    vector<int> test = {11, 23, 45};
    cout << add_elements(test, 3) << endl;
    return 0;
}