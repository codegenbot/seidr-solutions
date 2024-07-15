bool issame(const vector<int>& a, const vector<int>& b) {
    sort(a.begin(), a.end(), [](int num1, int num2) {
        int sum1 = 0, sum2 = 0;
        int temp1 = abs(num1), temp2 = abs(num2);
        while (temp1 > 0) {
            sum1 += temp1 % 10;
            temp1 /= 10;
        }
        while (temp2 > 0) {
            sum2 += temp2 % 10;
            temp2 /= 10;
        }
        if (sum1 == sum2) {
            return num1 < num2;
        }
        return sum1 < sum2;
    });

    return a;
}