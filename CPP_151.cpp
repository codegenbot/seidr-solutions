#include <vector>
#include <cmath>

long long doubleTheDifference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0f, 3.0f, 4.0f};
    long long oddSum = 0; // Initialize and declare
    assert(doubleTheDifference(lst) == oddSum); // Use within the scope of main()
    return 0;
}