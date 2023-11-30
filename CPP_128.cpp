int prod_signs(vector<int> arr){
    int product = 1;
    int sum = 0;
    
    if (arr.size() == 0) {
        return -32768;
    }
    
    for (int i = 0; i < arr.size(); i++) {
        product *= arr[i] > 0 ? 1 : (arr[i] < 0 ? -1 : 0);
        sum += abs(arr[i]);
    }
    
    return product * sum;
}