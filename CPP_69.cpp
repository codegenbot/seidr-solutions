int search(vector<int> lst){
    int result = -1;
    for(int i = 0; i < lst.size(); i++){
        int num = lst[i];
        int frequency = 0;
        for(int j = 0; j < lst.size(); j++){
            if(lst[j] == num){
                frequency++;
            }
        }
        if(frequency >= num && num > result){
            result = num;
        }
    }
    return result;
}