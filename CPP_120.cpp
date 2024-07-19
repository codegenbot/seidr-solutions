Here is the solution:

vector<int> maximum(vector<int> arr,int k){
    vector<int> result(arr.begin(),arr.end());
    sort(result.begin(),result.end());
    for(int i=result.size()-1;i>=result.size()-k;i--){
        reverse(result.begin()+i,result.end());
    }
    return vector<int>(result.begin(),result.begin()+k);
}