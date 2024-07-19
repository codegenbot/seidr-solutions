#include <vector>
#include <cassert>

int search(const std::vector<int>& lst) {
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
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}