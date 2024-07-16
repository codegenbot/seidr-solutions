vector<int> calculateLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> leaders;
    
    for(int i=n-1; i>=0; i--){
        while(i > 0 && arr[i] <= arr[i-1]){
            i--;
        }
        if(i == 0 || arr[i] >= arr[i-1])
            leaders.push_back(arr[i]);
    }
    
    return leaders;
}