```cpp
#include <vector>

bool below_threshold(vector<int> l, int t) {
    for (int i : l) {
        if (i >= t) {
            return false;
        }
    }
    return true;

}

int main() {
    vector<int> input = {1, 8, 4, 10};
    int threshold = 10;
    assert(!below_threshold(input, threshold)); 
    return 0;
}