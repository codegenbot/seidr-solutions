int prod_signs(vector<int> arr){
    if(arr.empty()) return -32768;
    
    int product = 1;
    int sum = 0;
    
    for(int num : arr){
        product *= (num == 0 ? 1 : num / abs(num));
        sum += abs(num);
    }
    
    return product * sum;
}