#include <vector>

vector<int> even_odd_count(int num) {
    vector<int> result(2, 0);
    char c;
    while (num != 0) {
        c = (num % 10) + '0';
        if ((c - '0') % 2 == 0)
            result[0]++;
        else
            result[1]++;
        num /= 10;
    }
    return result;