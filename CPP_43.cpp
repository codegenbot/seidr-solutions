bool pairs_sum_to_zero(vector<int> l){
    sort(l.begin(), l.end());
    for(int i = 0; i < l.size() - 1; ++i){
        if(i > 0 && l[i] == l[i-1]) continue;
        int target = -l[i];
        if(binary_search(l, i+1, l.size()-1, target)){
            return true;
        }
    }
    return false;
}

bool binary_search(const vector<int>& v, int start, int end, int target){
    while(start <= end) {
        int mid = (start + end)/2;
        if(v[mid] == target) return true;
        else if(v[mid] > target) end = mid-1;
        else start = mid+1;
    }
    return false;
}