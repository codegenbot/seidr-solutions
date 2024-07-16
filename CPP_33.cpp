vector<int> res = l;
    for (int i = 0; i < l.size(); i++) {
        if ((i + 1) % 3 == 0) {
            vector<int> temp = {l[i-2], l[i-1], l[i]};
            sort(temp.begin(), temp.end());
            res[i-2] = temp[0];
            res[i-1] = temp[1];
            res[i] = temp[2];
        }
    }
    return res;
}