int prod_signs(vector<int> arr){
    int product = 1;
    for(int i : arr){
        if(i != 0) product *= (i > 0 ? 1 : -1);
    }
    return product * accumulate(arr.begin(), arr.end(), 0);
}