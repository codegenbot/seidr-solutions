bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end(), [](int num1, int num2) {
        int countNum1 = __builtin_popcount(num1);
        int countNum2 = __builtin_popcount(num2);
        if (countNum1 == countNum2) {
            return num1 < num2;
        }
        return countNum1 < countNum2;
    });
    sort(b.begin(), b.end(), [](int num1, int num2) {
        int countNum1 = __builtin_popcount(num1);
        int countNum2 = __builtin_popcount(num2);
        if (countNum1 == countNum2) {
            return num1 < num2;
        }
        return countNum1 < countNum2;
    });
    return a == b;
}