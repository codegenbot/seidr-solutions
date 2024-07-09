#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

vector<int> even_odd_count(int num) {
    vector<int> result = {0, 0};

    if (num < 0)
        num = -num;

    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            result[0]++;
        else
            result[1]++;

        num /= 10;
    }

    return result;
}