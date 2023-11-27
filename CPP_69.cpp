int search(vector<int> lst){
    int maxFreq = -1;
    int result = -1;
    for(int i = 0; i < lst.size(); i++){
        int freq = 0;
        for(int j = 0; j < lst.size(); j++){
            if(lst[i] == lst[j]){
                freq++;
            }
        }
        if(lst[i] > 0 && freq >= lst[i] && freq > maxFreq){
            maxFreq = freq;
            result = lst[i];
        }
    }
    return result;
}