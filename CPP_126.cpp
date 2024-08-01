bool is_sorted(vector<int> lst){
    for(int i=1; i<lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            return false;
        }
    }
    vector<int> temp(lst.begin(), lst.end());
    sort(temp.begin(), temp.end());
    for(int i=0; i<temp.size()-1; i++){
        if(temp[i] == temp[i+1]){
            return false;
        }
    }
    return true;
}