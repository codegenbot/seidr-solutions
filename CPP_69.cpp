int search(vector<int> lst){
    int result = -1;
    for(int i = 1; i <= lst.size(); i++){
        int count = 0;
        for(int j = 0; j < lst.size(); j++){
            if(lst[j] == i){
                count++;
            }
        }
        if(count >= i && i > result){
            result = i;
        }
    }
    return result;
}