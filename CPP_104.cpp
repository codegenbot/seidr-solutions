vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int tmp = num;
        while (tmp > 0) {
            if (tmp % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            tmp /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}