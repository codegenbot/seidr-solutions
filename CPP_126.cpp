Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    vector<int> temp(lst.begin(), lst.end());
    sort(temp.begin(), temp.end());
    int count = 0;
    for(int i = 0; i < temp.size(); i++){
        for(int j = 0; j < lst.size(); j++){
            if(temp[i] == lst[j]){
                count++;
                break;
            }
        }
        if(count > 1){
            return false;
        }
        count = 0;
    }
    return true;
}