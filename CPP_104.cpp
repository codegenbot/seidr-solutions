vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for (int num : x) {
        bool has_even_digit = false;
        int n = num;
        while (n > 0) {
            if (n % 2 == 0) {
                has_even_digit = true;
                break;
            }
            n /= 10;
        }
        if (!has_even_digit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}