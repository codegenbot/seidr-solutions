#include <vector>
using namespace std;

int can_arrange(vector<int> arr) {
    int i = 1;
    while (i < arr.size()) {
        if (arr[i] <= arr[i - 1]) {
            return i - 1;
        }
        i++;
    }
    return -1;
}

int main() {
    assert(can_arrange({}) == -1);
    return 0;
}