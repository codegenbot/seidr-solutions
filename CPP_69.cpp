int search(vector<int> lst){
    int result = -1;
    for(int i = 0; i < lst.size(); i++){
        int count = 0;
        for(int j = 0; j < lst.size(); j++){
            if(lst[j] == lst[i]){
                count++;
            }
        }
        if(count >= lst[i] && lst[i] > result){
            result = lst[i];
        }
    }
    return result;
}