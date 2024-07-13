Here is the solution:

bool is_sorted(vector<int> lst){
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] >= lst[i+1]){
            vector<int> temp;
            for(int j = 0; j <= i; j++){
                temp.push_back(lst[j]);
            }
            for(int k = i+1; k < lst.size(); k++){
                temp.push_back(lst[k]);
            }
            if(count(temp.begin(), temp.end(), temp[0]) > 1) return false;
            return true;
        }
    }
    return true;
}