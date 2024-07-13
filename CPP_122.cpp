int add_elements(vector<int> arr,int k){
    int sum = 0;
    for(int i=0; i<k; i++){
        if(log10(arr[i]+1)<3){
            sum += arr[i];
        }
        else{
            break;
        }
    }
    return sum;
}