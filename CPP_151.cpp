long long double_the_difference(vector<int> lst) {
    int sum = 0;
    for (int num : lst) {
        if (num > 0 && (num & (num - 1)) == 0) {
            sum += num;
        }
    }
    return sum;
}