for (int i = 0; i < l.size(); ++i) {
    if ((i + 1) % 3 == 0) {
        vector<int> temp = l;
        sort(temp.begin(), temp.end());
        l[i] = temp[i];
    }
}
return l;