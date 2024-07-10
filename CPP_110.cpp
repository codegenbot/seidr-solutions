string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            evenCount++;
    }
    
    for (int i = 0; i < lst1.size(); i++) {
        bool foundInSecondList = false;
        for (int j = 0; j < lst2.size(); j++) {
            if (lst1[i] % 2 != 0 && lst2[j] % 2 == 0) {
                swap(lst1[i], lst2[j]);
                foundInSecondList = true;
                break;
            }
        }
        
        if (!foundInSecondList)
            return "NO";
    }
    
    for (int num : lst1) {
        if (num % 2 != 0)
            return "NO";
    }
    
    return "YES";
}