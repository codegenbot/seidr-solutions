int search(vector<int> lst) {
    int maxFreq = -1;
    int maxValue = -1;
    
    // Iterate through the vector
    for (int i = 0; i < lst.size(); i++) {
        int freq = 0;
        
        // Count the frequency of the current element
        for (int j = 0; j < lst.size(); j++) {
            if (lst[j] == lst[i]) {
                freq++;
            }
        }
        
        // Check if the frequency is greater than or equal to the value of the element
        if (freq >= lst[i] && lst[i] > maxValue) {
            maxValue = lst[i];
        }
    }
    
    return maxValue;
}