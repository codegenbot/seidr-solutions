int prod_signs(vector<int> arr){
    int sum = 0;
    int sign_prod = 1;
    if(arr.empty()) return -32768;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > 0){
            sum += arr[i];
        } else if(arr[i] < 0){
            sum -= arr[i];
            sign_prod *= -1;
        }
    }
    return sum * sign_prod;
}