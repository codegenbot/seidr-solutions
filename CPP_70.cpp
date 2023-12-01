vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int n = lst.size();
    int i = 0, j = n-1;
    while(i <= j){
        result.push_back(lst[i]);
        if(i != j)
            result.push_back(lst[j]);
        i++;
        j--;
    }
    return result;
}