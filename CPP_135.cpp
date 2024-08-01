```cpp
#include <vector>
using namespace std;

int can_arrange(vector<int> arr) {
    int i = 0;
    while (i < arr.size() - 1) {
        if (arr[i] >= arr[i + 1]) {
            return i;
        }
        i++;
    }
    return -1;
}

int main() {
    vector<int> input; // read your input here
    assert(can_arrange(input) == -1); // test the function
    return 0;
}