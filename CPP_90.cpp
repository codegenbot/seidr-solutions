int next_smallest(vector<int> lst){
    vector<int> lst_copy = lst;
    if(lst_copy.size() < 2) return -1; // Return None
    sort(lst_copy.begin(), lst_copy.end());
    for(int i=0; i<lst_copy.size()-1; i++){
        if(lst_copy[i] != lst_copy[i+1])
            return lst_copy[i];
    }
    return -1; // Return None
}