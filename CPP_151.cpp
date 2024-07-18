long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && ((int)num) % 2 != 0) {
            sum += (long long)num * num;
        }
    }
    return sum;
}