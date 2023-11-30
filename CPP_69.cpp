int search(vector<int> lst) {
    int maxFreq = -1;
    int result = -1;
    
    for (int i = 0; i < lst.size(); i++) {
        int num = lst[i];
        int freq = 0;
        
        for (int j = 0; j < lst.size(); j++) {
            if (lst[j] == num) {
                freq++;
            }
        }
        
        if (freq >= num && num > maxFreq) {
            maxFreq = num;
            result = num;
        }
    }
    
    return result;
}