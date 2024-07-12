Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] >= lst[i+1]){
            vector<int> temp;
            for(int j = 0; j <= i; j++){
                temp.push_back(lst[j]);
            }
            if(unique(temp.begin(), temp.end()) - temp.begin() != i + 1){
                return false;
            }
        }
    }
    return true;
}