#include <vector>
#include <algorithm>

bool hasEvenDigit(int num) {
    int temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 == 0)
            return true;
        temp /= 10;
    }
    return false;
}

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int num : x) {
        if (!hasEvenDigit(num))
            result.push_back(num);
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(std::equal(unique_digits({135, 103, 31}), {31, 135}, [](int a, int b){return a == b; }));
    return 0;
}