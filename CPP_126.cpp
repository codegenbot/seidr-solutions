Here's the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            vector<int> temp;
            for(int j = 0; j < i; j++){
                temp.push_back(lst[j]);
            }
            for(int k = i; k < lst.size(); k++){
                temp.push_back(lst[k]);
            }
            if(count(temp.begin(), temp.end(), temp[0]) > 1){
                return false;
            }
        }else{
            return false;
        }
    }
    return true;
}