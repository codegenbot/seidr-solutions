Here's the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            return false;
        }
    }
    int count = 1;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] == lst[i-1]){
            count++;
            if(count > 2){
                return false;
            }
        }else{
            count = 1;
        }
    }
    return true;
}