long long double_the_difference(vector<float> lst){
    long long total = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            total += (long long)pow(num, 2);
        }
    }
    return total * 2;
}