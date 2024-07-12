int n = arr.size();
    for(int i = 0; i < n; ++i){
        if(is_sorted(arr.begin(), arr.end())){
            return true;
        }
        rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}