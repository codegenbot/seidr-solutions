bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size())return false;
    for(int i=0; i<a.size(); i++){
        if(sorted_list_sum({a[i]}).size() != sorted_list_sum({b[i]}).size())return false;
    }
    return true;
}