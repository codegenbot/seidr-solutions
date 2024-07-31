#include <vector>
#include <algorithm>
#include <set>

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> unique_digits(vector<int> x){
    std::set<int> uniqueSet;
    for (int num : x) {
        while (num > 0) {
            uniqueSet.insert(num % 10);
            num /= 10;
        }
    }
    vector<int> uniqueDigits(uniqueSet.begin(), uniqueSet.end());
    return uniqueDigits;
}