#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return (a == b);
}

vector<int> even_odd_count(int num) {
    int count_even = 0;
    int count_odd = 0;

    if (num < 0)
        num = -num;

    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            count_even++;
        else
            count_odd++;

        num /= 10;
    }

    return {count_even, count_odd};
}