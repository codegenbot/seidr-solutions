for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            vector<int> temp = {l[i], l[i+1], l[i+2]};
            sort(temp.begin(), temp.end());
            l[i] = temp[0];
            l[i+1] = temp[1];
            l[i+2] = temp[2];
        }
    }
    return l;
}