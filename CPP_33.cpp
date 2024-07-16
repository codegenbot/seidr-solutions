for (int i = 0; i < l.size(); ++i) {
    if ((i + 1) % 3 == 0) {
        vector<int> temp = l;
        sort(temp.begin() + i - 2, temp.begin() + i + 1);
        l = temp;
    }
}
return l;