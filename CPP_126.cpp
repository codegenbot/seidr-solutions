Here is the completed code:

bool is_sorted(vector<int> lst){
    if (lst.size() <= 1)
        return true;

    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] >= lst[i - 1])
            continue;
        else
            break;
    }
    return !is_duplicate(lst);
}

bool is_duplicate(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        for (int j = i + 1; j < lst.size(); j++) {
            if (lst[i] == lst[j])
                return true;
        }
    }
    return false;
}