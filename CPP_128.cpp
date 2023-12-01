int prod_signs(vector<int> arr){
    int sum = 0;
    int product = 1;
    
    if (arr.empty()){
        return -32768;
    }
    
    for (int i = 0; i < arr.size(); i++){
        sum += abs(arr[i]);
        product *= arr[i] < 0 ? -1 : arr[i] > 0 ? 1 : 0;
    }
    
    return sum * product;
}