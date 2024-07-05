vector<int> result;
    sort(lst.begin(), lst.end());
    int i = 0, j = lst.size() - 1;
    bool flag = true;
    while (i <= j) {
        if (flag) {
            result.push_back(lst[i++]);
        } else {
            result.push_back(lst[j--]);
        }
        flag = !flag;
    }
    return result;
}