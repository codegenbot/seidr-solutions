Here is the completed code:

bool is_sorted(vector<int> lst){
    if (lst.size() <= 1) return true;
    for (int i = 1; i < lst.size(); ++i)
        if (lst[i-1] > lst[i])
            return false;
    int count = 0;
    for (int i = 0; i < lst.size(); ++i)
        if (lst[i] == lst[0]) count++;
    return count == 1 || lst.size() == 1;
}