#include <vector>

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> unique_digits(vector<int> x){
    vector<int> unique;
    for (int num : x) {
        int temp = num;
        bool seen[10] = {0};
        while (temp > 0) {
            int digit = temp % 10;
            if (!seen[digit]) {
                unique.push_back(num);
                seen[digit] = true;
            }
            temp /= 10;
        }
    }
    return unique;
}