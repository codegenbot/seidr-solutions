#include <cassert>
#include <vector>

int productSigns(std::vector<int> inputArr) {
    int product = 1;
    long long sum = 0;

    for (int num : inputArr) {
        if (num == 0) {
            return 0;
        }
        product *= (num > 0 ? 1 : -1);
        sum += abs(num);
    }

    if (inputArr.empty()) {
        return 0; 
    }

    return product * sum;
}

int main() {
    assert(productSigns({-1, 1, 1, 0}) == 0);
}