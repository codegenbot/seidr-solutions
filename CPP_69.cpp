for(int num : lst){
        int freq = 0;
        for(int i = 0; i < lst.size(); i++){
            if(num == lst[i]){
                freq++;
            }
        }
        if(num > 0 && freq >= num){
            return num;
        }
    }
    return -1;
}