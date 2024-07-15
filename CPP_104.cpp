#include <vector>
#include <set>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> unique_digits(const std::vector<int>& x){
    std::set<int> uniqueSet;
    for (int num : x) {
        while (num > 0) {
            uniqueSet.insert(num % 10);
            num /= 10;
        }
    }
    std::vector<int> uniqueDigits(uniqueSet.begin(), uniqueSet.end());
    return uniqueDigits;
}