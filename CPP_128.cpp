int prod_signs(vector<int> arr){
    long long result = 1;
    for(int x : arr){
        if(x != 0)
            result *= (x > 0 ? 1 : -1);
    }
    return result * abs(result) < 2e9 ? result : -32768;
}