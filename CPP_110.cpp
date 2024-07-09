string exchange(vector<int> lst1, vector<int> lst2) {
    bool hasOdd = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            hasOdd = true;
            break;
        }
    }
    
    if (!hasOdd) return "YES";
    
    for (int num : lst1) {
        if (find(lst2.begin(), lst2.end(), num) != lst2.end()) {
            lst2.erase(remove(lst2.begin(), lst2.end(), num), lst2.end());
        } else {
            hasOdd = false;
            break;
        }
    }
    
    return hasOdd ? "NO" : "YES";
}