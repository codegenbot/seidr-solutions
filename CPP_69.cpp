int search(vector<int> lst){
    int result = -1;
    int maxFrequency = 0;
    
    for (int i = 0; i < lst.size(); i++) {
        int frequency = 0;
        for (int j = 0; j < lst.size(); j++) {
            if (lst[j] == lst[i]) {
                frequency++;
            }
        }
        
        if (frequency >= lst[i] && lst[i] > result) {
            result = lst[i];
            maxFrequency = frequency;
        }
    }
    
    if (maxFrequency == 0) {
        return -1;
    }
    
    return result;
}