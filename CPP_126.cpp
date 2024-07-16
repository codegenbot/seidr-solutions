vector<int> temp = lst;
    sort(temp.begin(), temp.end());
    for (int i = 0; i < temp.size(); i++) {
        if (temp[i] != lst[i] || (i + 1 < temp.size() && temp[i] == temp[i + 1]))
            return false;
    }
    return true;
}