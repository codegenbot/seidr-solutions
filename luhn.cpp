int luhn(vector<int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        if ((i % 2) == 1) {
            int temp = v[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += v[i];
        }
    }
    return sum;
}