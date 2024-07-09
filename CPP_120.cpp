Here is the completed code:

vector<int> maximum(vector<int> arr,int k){
    vector<int> res;
    for(int i=0; i<k; i++){
        int max_val = INT_MIN;
        for(int j=0; j<arr.size(); j++){
            if(arr[j]>max_val){
                max_val = arr[j];
            }
        }
        res.push_back(max_val);
        sort(arr.begin(),arr.end());
        arr.pop_back();
    }
    return res;
}