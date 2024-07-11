vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for (int num : x) {
        int copy_num = num;
        bool has_even_digit = false;
        while (copy_num > 0) {
            if (copy_num % 2 == 0) {
                has_even_digit = true;
                break;
            }
            copy_num /= 10;
        }
        if (!has_even_digit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}