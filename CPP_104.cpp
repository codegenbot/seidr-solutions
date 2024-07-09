Here is the solution:

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int num : x) {
        int digit = 0;
        bool hasEvenDigit = false;
        while (num > 0) {
            int temp = num % 10;
            if (temp % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            num /= 10;
        }
        if (!hasEvenDigit)
            result.push_back(num);
    }
    sort(result.begin(), result.end());
    return result;
}