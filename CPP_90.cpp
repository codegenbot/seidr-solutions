int next_smallest(vector<int> lst){
    vector<int> sortedList = lst;
    sort(sortedList.begin(), sortedList.end());
    
    if (sortedList.size() < 2) {
        return -1; // None if there is no such element.
    }
    
    for(int i = 0; i < sortedList.size(); i++) {
        if(i > 0 && sortedList[i] != sortedList[i-1]) {
            return sortedList[i];
        }
    }
    
    return -1;
}