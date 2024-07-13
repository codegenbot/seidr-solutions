int add_elements(vector<int> arr,int k){
    int sum = 0;
    for(int i=0; i<k; i++){
        if(log10(abs(arr[i])+1) <= 2){
            sum += arr[i];
        }
    }
    return sum;
}