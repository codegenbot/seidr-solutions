int prod_signs(vector<int> arr){
    int product = 1;
    int sum = 0;

    for(int i : arr){
        if(i == 0) continue;
        int sign = i / abs(i);
        sum += abs(i);
        product *= sign;
    }

    return product * sum > 0 ? (int)sum : -32768;
}