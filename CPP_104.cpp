#include <vector>

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for (int num : x) {
        vector<int> digits;
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }

        sort(digits.begin(), digits.end());
        int unique_num = 0;
        for (int digit : digits) {
            unique_num = unique_num * 10 + digit;
        }

        if (find(result.begin(), result.end(), unique_num) == result.end()) {
            result.push_back(unique_num);
        }
    }
    return result;
}