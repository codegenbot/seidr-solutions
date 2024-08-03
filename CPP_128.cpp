int prod_signs(vector<int> arr){
    if(arr.empty()) return -32768;
    int sign = 1;
    long long sum = 0;
    for(int x : arr){
        if(x == 0) continue;
        sum += abs(x);
        sign *= (x > 0 ? 1 : -1);
    }
    return sum * sign;
}