#include <vector>
#include <cassert>
using namespace std;

vector<int> pluck(vector<int> arr) {
    int min_even = -1;
    int min_index = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            if (min_even == -1 || arr[i] < min_even) {
                min_even = arr[i];
                min_index = i;
            }
        }
    }
    
    if (min_even == -1) {
        return {};
    }
    
    return {min_even, min_index};
}

int main() {
    assert(pluck({7, 9, 7, 1}) == vector<int>{});
    assert(pluck({8, 3, 4, 2}) == vector<int>{2, 3});
    assert(pluck({2, 4, 6, 8}) == vector<int>{2, 0});
    return 0;
}