#include <vector>
#include <cassert>

int count_nums(vector<int> n) {
    int count = 0;
    for (int i = 0; i < n.size(); i++) {
        int sum = 0;
        int num = n[i];
        while (num != 0) {
            sum += abs(num % 10);
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
    assert(count_nums({123, 456, 789}) == 3); // Three numbers with non-zero sum of digits
    assert(count_nums({0}) == 0); // Zero has sum of digits equal to zero
    
    return 0;
}