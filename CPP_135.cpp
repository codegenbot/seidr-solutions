#include <vector>
using namespace std;

int can_arrange(vector<int> arr) {
    int prev = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= prev) {
            return i;
        }
        prev = arr[i];
    }
    return -1;
}

int main() {
    assert(can_arrange({}) == -1);
    return 0;
}