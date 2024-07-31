#include <vector>
#include <cassert>

int search(std::vector<int> lst) {
    int result = -1;
    for (int num : lst) {
        int frequency = 0;
        for (int n : lst) {
            if (n == num) {
                frequency++;
            }
        }
        if (num > 0 && frequency >= num && num > result) {
            result = num;
        }
    }
    return result;
}

int main() {
    // Test cases can be added here
    return 0;
}