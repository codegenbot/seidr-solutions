vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int i : x) {
        bool has_even_digit = false;
        int num = i;
        while (num > 0) {
            if ((num % 10) % 2 == 0) {
                has_even_digit = true;
                break;
            }
            num /= 10;
        }
        if (!has_even_digit) {
            result.push_back(i);
        }
    }
    sort(result.begin(), result.end());
    return result;
}