bool hasOdd(vector<int> v) {
    for (int x : v) {
        if (x % 2 != 0)
            return true;
    }
    return false;
}

string exchange(vector<int> lst1, vector<int> lst2) {
    if (hasOdd(lst1))
        return "NO";
    bool oddInLst2 = false;
    for (int x : lst2) {
        if (x % 2 != 0)
            oddInLst2 = true;
    }
    if (!oddInLst2)
        return "YES";
    int count = 0;
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) {
            bool found = false;
            for (int j = 0; j < lst2.size(); j++) {
                if (lst2[j] % 2 != 0) {
                    swap(lst1[i], lst2[j]);
                    count++;
                    found = true;
                    break;
                }
            }
            if (!found)
                return "NO";
        }
    }
    return "YES";
}