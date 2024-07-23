int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;
    
    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= abs(num);
        sum += abs(num);
    }
    
    if (sum == 0) {
        return product > 0 ? 1 : -1;
    } else {
        return product * (sum / abs(sum));
    }
}