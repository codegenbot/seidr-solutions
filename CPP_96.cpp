#include <vector>

std::vector<int> count_up_to(int n) {
    std::vector<int> result;
    int num = 2;
    while (result.size() < n) {
        bool isPrime = true;
        for (int i = 2; i*i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            result.push_back(num);
        }
        num++;
    }
    return result;
}