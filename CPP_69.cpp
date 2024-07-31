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
    std::vector<int> numbers = {2, 3, 5, 3, 2, 2, 6};
    assert(search(numbers) == 3);
    
    return 0;
}