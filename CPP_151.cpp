#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float numbers[] = {1.5f, 2.25f, 3.0f, 4.75f};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < size; i++) {
        lst.push_back(numbers[i]);
    }
    assert(double_the_difference(lst) == 30);
    return 0;
}