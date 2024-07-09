int smallest_change(vector<int> arr){
    int n = arr.size();
    string s = "";
    for(int i=0; i<n; i++){
        s += to_string(arr[i]);
    }
    
    int count1 = 0;
    int l, r;
    for(l = 0, r = n-1; l <= r;){
        if(s[l] != s[r]){
            count1++;
        }else{
            l++; r--;
        }
    }

    return (n-count1);
}