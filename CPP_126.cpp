bool is_sorted(vector<int> lst){
    for(int i=1; i<lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
        vector<int> temp = lst;
        sort(temp.begin(), temp.end());
        if(count(temp.begin(), temp.end(), temp[0]) > 1){
            return false;
        }
    }
    return true;
}