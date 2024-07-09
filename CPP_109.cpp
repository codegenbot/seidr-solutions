#include <iostream>
#include <vector>
#include <algorithm>

bool move_one_ball(std::vector<int> arr) {
    int max = *std::max_element(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > max - arr.size() + i) {
            return false;
        }
    }
    return true;

}

int main() {
    assert(move_one_ball({})==true);
    // Add more test cases and your logic here
    return 0;
}