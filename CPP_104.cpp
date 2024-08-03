bool issame(int x, int y);

bool issame(int x, int y) {
    string s1 = to_string(x);
    string s2 = to_string(y);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int temp = num;
        while (temp > 0) {
            if (temp % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            bool unique = true;
            for (int res : result) {
                if (issame(res, num)) {
                    unique = false;
                    break;
                }
            }
            if (unique) {
                result.push_back(num);
            }
        }
    }
    sort(result.begin(), result.end());
    return result;
}