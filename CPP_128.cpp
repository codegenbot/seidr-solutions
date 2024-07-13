int prod_signs(vector<int> arr) {
    if(arr.empty()) return -32768;
    int sign = 1;
    long long sum = 0;
    for(int num : arr) {
        if(num < 0) sign *= -1;
        else if(num > 0) continue;
        sum += abs(num);
    }
    return sum * sign;
}