if(arr.size() == 0) return arr;
    
    int sum = arr[0] + arr[arr.size()-1];
    
    if(sum % 2 == 0){
        sort(arr.rbegin(), arr.rend());
    } else {
        sort(arr.begin(), arr.end());
    }
    
    return arr;
}