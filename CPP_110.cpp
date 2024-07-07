string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int i : lst1) {
        if (i % 2 == 0)
            evenCount++;
    }
    for (int i : lst1) {
        bool found = false;
        for (int j : lst2) {
            if (j % 2 == 0 && i != j) {
                swap(lst1[i], lst2[j]);
                found = true;
                break;
            }
        }
        if (!found)
            return "NO";
    }
    if (evenCount == lst1.size())
        return "YES";
    else
        return "NO";
}