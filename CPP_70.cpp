vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end());
    vector<int> res;
    for(size_t i = 0, j = lst.size() - 1; i <= j; ++i, --j){
        if(i == j){
            res.push_back(lst[i]);
        }
        else{
            res.push_back(lst[i]);
            res.push_back(lst[j]);
        }
    }
    return res;
}