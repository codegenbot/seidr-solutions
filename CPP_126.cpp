Here's the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            return false;
        }
    }
    vector<int> temp(lst.begin(), lst.end());
    sort(temp.begin(), temp.end());
    int count = 0;
    for(int i = 0; i < temp.size() - 1; i++){
        if(temp[i] == temp[i+1])
            count++;
    }
    return count == 0 || (count > 0 && temp[0] != temp[temp.size()-1]);
}