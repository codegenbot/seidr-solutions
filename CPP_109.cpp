#include <cassert>
#include <vector>

bool move_one_ball(std::vector<int> arr) {
    // Function to move one ball based on given criteria
    int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int min_index = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }
    
    return (arr[min_index] == arr[(min_index + n - 1) % n]);
}

int main() {
    // Test cases
    assert(move_one_ball({}) == true);

    return 0;
}