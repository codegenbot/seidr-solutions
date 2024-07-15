int prod_signs(vector<int> arr){
    int product = 1;
    for(int x : arr){
        product *= (x > 0) - (x < 0);
    }
    return product == 0 ? 0 : (product ? arr.size() * product : -32768);
}