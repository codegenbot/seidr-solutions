int add_elements(vector<int> arr,int k){
    int sum = 0;
    for(int i=0; i<k; i++){
        if(log10(arr[i]+1) <= 2){ // Check if number has at most two digits
            sum += arr[i];
        }
    }
    return sum;
}