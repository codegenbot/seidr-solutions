int prod_signs(vector<int> arr){
    int product = 1;
    long long sum = 0;

    for(int i : arr){
        if(i == 0) return -32768;
        product *= (i > 0 ? 1 : -1);
        sum += abs(i);
    }

    return product * sum;
}