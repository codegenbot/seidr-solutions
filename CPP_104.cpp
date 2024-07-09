vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int temp = num;
        while (temp != 0) {
            if ((temp % 10) % 2 == 0) {
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

assert(sort(vector<int>(unique_digits({135, 103, 31})).begin(), vector<int>(unique_digits({135, 103, 31})).end()) == sort(vector<int>({31, 135}).begin(), vector<int>({31, 135}).end()));