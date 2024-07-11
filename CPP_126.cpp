vector<int> sortedList = lst;
    sort(sortedList.begin(), sortedList.end());
    
    for (int i = 0; i < sortedList.size(); i++) {
        if (sortedList[i] != lst[i] || count(lst.begin(), lst.end(), lst[i]) > 1) {
            return false;
        }
    }
    
    return true;
}