int next_smallest(vector<int> lst){
    if(lst.empty()) return -1;  // or any sentinel value
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i=0;i<sorted.size();i++){
        if(i==0||sorted[i-1]!=sorted[i]){
            if(i+1!=sorted.size() && sorted[i]==sorted[i+1]) return -1;  // or any sentinel value
            else return sorted[i];
        }
    }
    return -1;  // or any sentinel value
}