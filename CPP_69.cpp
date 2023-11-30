int search(vector<int> lst){
    int maxNum = -1;
    for(int i = 0; i < lst.size(); i++){
        int num = lst[i];
        int count = 0;
        for(int j = 0; j < lst.size(); j++){
            if(lst[j] == num){
                count++;
            }
        }
        if(count >= num && num > maxNum){
            maxNum = num;
        }
    }
    return maxNum;
}