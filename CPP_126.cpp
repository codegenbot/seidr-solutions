vector<int> tmp = lst;
    sort(tmp.begin(), tmp.end());
    
    for (int i = 0; i < tmp.size(); i++) {
        if (i > 0 && tmp[i] == tmp[i - 1]) {
            return false;
        }
    }
    
    return tmp == lst;
}