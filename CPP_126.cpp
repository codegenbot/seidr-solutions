Here is the completed code:

bool is_sorted(vector<int> lst){
    for(int i=1; i<lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            return false;
        }
    }
    int count = 0;
    for(int i=0; i<lst.size(); i++){
        if(i==0 || lst[i] != lst[i-1])
            count++;
    }
    return count == 1;
}