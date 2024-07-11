bool hasOdd(vector<int> v) {
    for (int i : v) {
        if (i % 2 != 0)
            return true;
    }
    return false;
}

string exchange(vector<int> lst1, vector<int> lst2) {
    bool oddInLst1 = hasOdd(lst1);
    bool oddInLst2 = hasOdd(lst2);

    if (!oddInLst1 && oddInLst2)
        return "YES";
    else
        return "NO";
}