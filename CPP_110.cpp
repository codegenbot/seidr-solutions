bool hasOdd(vector<int> v) {
    for (int num : v) {
        if (num % 2 != 0)
            return true;
    }
    return false;
}

string exchange(vector<int> lst1, vector<int> lst2) {
    vector<int> lst1_copy(lst1);
    sort(lst1_copy.begin(), lst1_copy.end());
    
    if (!hasOdd(lst1_copy))
        return "YES";
    else
        return "NO";
}