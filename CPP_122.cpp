#include <vector>
#include <cassert>

using namespace std;

int add_elements(const vector<int>& arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; ++i) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    assert(add_elements({12, 45, 78}, 3) == 135);
    return 0;
}