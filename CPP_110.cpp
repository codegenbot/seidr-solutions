string exchange(vector<int> lst1, vector<int> lst2) {
    int even = 0;
    for (int i : lst1) {
        if (i % 2 == 0)
            even++;
    }
    if (even == lst1.size())
        return "YES";
    else
        return "NO";
}