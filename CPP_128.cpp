int prod_signs(vector<int> arr){
    if(arr.empty()) return -32768;
    int sign = 1;
    long long sum = 0;
    for(int i: arr){
        if(i == 0) continue;
        sign *= (i > 0 ? 1 : -1);
        sum += abs(i);
    }
    return sign * sum;
}