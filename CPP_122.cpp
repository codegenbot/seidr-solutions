int add_elements(vector<int> arr,int k){
    int sum = 0;
    for(int i=0; i<k; i++){
        if(log10(abs(arr[i]))<2 || (arr[i]<10 && arr[i]>=-9)){
            sum += arr[i];
        }
    }
    return sum;
}