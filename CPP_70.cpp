vector<int> strange_sort_list(vector<int> lst){
    // Sort the vector in ascending order
    sort(lst.begin(), lst.end());
    
    int n = lst.size();
    if(n == 0) return lst;
    
    vector<int> result(n);
    int i = 0, j = n-1, k = 0;
    
    while(i <= j){
        result[k++] = lst[i++];
        if(i <= j){
            result[k++] = lst[j--];
        }
    }
    
    return result;
}