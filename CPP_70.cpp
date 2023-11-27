vector<int> strange_sort_vector(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int start = 0;
    int end = lst.size() - 1;
    
    while(start <= end){
        if(start == end){
            result.push_back(lst[start]);
            break;
        }
        result.push_back(lst[start++]);
        result.push_back(lst[end--]);
    }
    
    return result;
}