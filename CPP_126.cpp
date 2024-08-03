bool is_sorted(vector<int> lst) {
    if (lst.size() <= 1)
        return true;

    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1])
            continue;
        else {
            int count = 0;
            for (int j = i; j < lst.size(); j++) {
                if (lst[j] == lst[i])
                    count++;
                else
                    break;
            }
            return count > 1 ? false : true;
        }
    }
    return true;
}