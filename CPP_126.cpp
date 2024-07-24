Here is the completed code:

bool is_sorted(vector<int> lst){
    bool flag = true;
    for(int i=0; i<lst.size()-1; i++){
        if(lst[i] >= lst[i+1]){
            flag = false;
            break;
        }
        if(i < lst.size() - 2 && lst[i] == lst[i+1]){
            flag = false;
            break;
        }
    }
    return flag;
}