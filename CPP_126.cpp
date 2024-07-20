bool is_sorted(vector<int> lst){
    for(int i=1;i<lst.size();i++){
        if(lst[i-1]>lst[i] || (find(lst.begin(),lst.end(),lst[i])!=lst.end() && i!=lst.size()-1)){
            return false;
        }
    }
    return true;
}