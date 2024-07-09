int prod_signs(vector<int> arr) {
    if(arr.empty()) return -32768;
    int sign = 1;
    long long res = 0;
    for(int x : arr) {
        sign *= (x > 0 ? 1 : (x < 0 ? -1 : 0));
        res += abs(x);
    }
    return sign * res;
}