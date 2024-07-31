#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> unique_digits(std::vector<int> x){
    std::vector<int> result;
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
    std::sort(result.begin(), result.end());
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    // Implement the comparison logic here
    return a == b;
}

int main(){
    // Test the function
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    return 0;
}