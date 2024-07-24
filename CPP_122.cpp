#include <iostream>
#include <vector>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < min(k, (int)arr.size()); i++) {
        if (to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;

}

int main() {
    assert(add_elements({1}, 1) == 1);
    return 0;
}