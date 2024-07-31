#include <vector>
#include <algorithm>
#include <cassert>

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for (int num : x) {
        int temp = num;
        bool hasEvenDigit = false;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    // Function implementation
}

int main() {
    vector<int> input = {123, 456, 789};
    vector<int> unique = unique_digits(input);
    issame(input, unique);
    return 0;
}