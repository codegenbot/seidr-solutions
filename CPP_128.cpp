#include <vector>
int prod_signs(std::vector<int> arr) {
    if (arr.empty()) return -32768;
    int product = 1;
    long sum = 0;
    bool isNegative = false;
    for (int num : arr) {
        if (num < 0) isNegative = true;
        else if (num > 0 && !isNegative) continue;
        product *= num;
        sum += abs(num);
    }
    return isNegative ? -product : product * sum;
}