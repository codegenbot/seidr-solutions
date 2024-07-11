int smallest_change(vector<int> arr){
    int n = arr.size();
    string str = "";
    for(int i=0; i<n; i++){
        str += to_string(arr[i]);
    }
    
    int left = 0, right = n - 1;
    int changes = 0;
    while(left < right){
        if(str[left] != str[right]){
            changes++;
            left++;
        }else{
            left++;
            right--;
        }
    }
    return changes;
}