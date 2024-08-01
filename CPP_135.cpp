#include <vector>
using namespace std;

int can_arrange(vector<int> arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] >= arr[i + 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr;
    int num;
    cout << "Enter numbers for array (enter -1 to stop):" << endl;
    while ((cin >> num) && num != -1) {
        arr.push_back(num);
    }
    assert(can_arrange(arr) == -1);
    return 0;
}