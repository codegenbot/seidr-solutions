#include <vector>

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for (int num : x) {
        while (num != 0) {
            int digit = num % 10;
            if (find(result.begin(), result.end(), digit) == result.end()) {
                result.push_back(digit);
            }
            num /= 10;
        }
    }
    sort(result.begin(), result.end());
    return result;
}