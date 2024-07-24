int prod_signs(vector<int> arr){
    int product = 1;
    long long sum = 0;
    for(int i : arr){
        if(i == 0) product *= 1;
        else product *= (i > 0 ? 1 : -1);
        sum += abs(i);
    }
    return product * sum == 0 ? -32768 : product * sum;
}