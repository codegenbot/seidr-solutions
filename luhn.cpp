#include <vector>

long long luhn(std::vector<long long> v) {
    int sum = 0;
    for(int i = 0; i < v.size(); i++) {
        if(i % 2 == 1) {
            long long num = v[i] * 2;
            if(num > 9) {
                num -= 9;
            }
            sum += num;
        } else {
            sum += v[i];
        }
    }
    return sum;
}