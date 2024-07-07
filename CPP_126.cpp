Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            return false;
        }
    }
    vector<int> temp(lst.begin(), lst.end());
    sort(temp.begin(), temp.end());
    return temp == lst && count(temp.begin(), temp.end(), temp[0]) == 1;
}