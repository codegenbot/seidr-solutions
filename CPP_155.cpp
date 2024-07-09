#include <vector>

std::vector<int> even_odd_count(int num) {
    int even = 0;
    int odd = 0;
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            even++;
        else
            odd++;
        num /= 10;
    }
    return {even, odd};
}