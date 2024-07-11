#include <vector>

std::vector<long long> luhn(std::vector<long long> cc) {
    for (int i = cc.size() - 1; i > 0; --i) {
        if ((cc[i] * 2) >= 10)
            cc[i] -= 9;
        cc[i] *= 2;
    }
    long long sum = 0;
    for (long long n : cc) {
        sum += n;
    }
    return {sum};
}