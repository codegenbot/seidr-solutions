int next_smallest(vector<int> lst){
    if(lst.empty()) return -1; // None in Python
    vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(),sorted_lst.end());
    int count = 0;
    for(int i=0;i<sorted_lst.size();i++){
        if(sorted_lst[i] != lst[0]){
            if(count == 1) return sorted_lst[i];
            count++;
        }
    }
    return -1; // None in Python
}