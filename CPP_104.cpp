vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for (int num : x) {
        int temp = num;
        bool has_even_digit = false;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                has_even_digit = true;
                break;
            }
            temp /= 10;
        }
        if (!has_even_digit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}