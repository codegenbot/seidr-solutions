Here's the completed code:

bool is_sorted(vector<int> lst){
    if(lst.size() <= 1) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            for(int j = 0; j < i; j++) temp.push_back(lst[j]);
            if(count(temp.begin(), temp.end(), lst[i]) > 1) return false;
        }
    }
    return true;
}