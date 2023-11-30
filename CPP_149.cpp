vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    
    for(int i=0; i<lst.size(); i++){
        if(lst[i].length() % 2 != 0){
            lst.erase(lst.begin()+i);
            i--;
        }
    }
    
    sort(lst.begin(), lst.end(), [](const string& s1, const string& s2){
        if(s1.length() == s2.length()){
            return s1 < s2;
        }
        return s1.length() < s2.length();
    });
    
    return lst;
}