vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for (int num : x) {
        int digit = num;
        while (digit > 0) {
            if (digit % 2 == 0) {
                break;
            }
            digit /= 10;
        }
        if (digit == 0) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}