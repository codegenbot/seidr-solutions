#include <vector>
using namespace std;

int can_arrange(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i - 1;
        }
    }
    return -1;
}

int main() {
    int result = can_arrange({1, 2, 3, 4, 5});
    cout << "The first out of order element is at index: " << result << endl;
    return 0;
}