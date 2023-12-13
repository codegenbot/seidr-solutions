int search(vector<int> lst){
    int maxFreq = -1;
    int maxValue = -1;
    
    for(int i = 0; i < lst.size(); i++){
        int value = lst[i];
        int freq = 0;
        
        for(int j = 0; j < lst.size(); j++){
            if(lst[j] == value){
                freq++;
            }
        }
        
        if(freq >= value && value > maxValue){
            maxValue = value;
        }
    }
    
    return maxValue;
}