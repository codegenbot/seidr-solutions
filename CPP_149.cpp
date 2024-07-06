vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> new_list;
    
    for(auto s : lst){
        if(s.length() % 2 == 0)
            new_list.push_back(s);
    }
    
    sort(new_list.begin(), new_list.end());
    
    return new_list;
}