vector<int> generate_integers(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; i++) {
        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                result.push_back(digit);
            }
            temp /= 10;
        }
    }
    return result;
}