int prod_signs(vector<int> arr){
    int product = 1;
    long sum = 0;
    if(arr.empty()) return -32768;
    for(int i : arr){
        if(i == 0) continue;
        product *= (i > 0 ? 1 : -1);
        sum += abs(i);
    }
    return product * sum;
}