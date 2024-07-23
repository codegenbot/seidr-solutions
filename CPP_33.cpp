for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            vector<int> temp;
            for (int j = i; j < l.size(); j += 3) {
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            int index = 0;
            for (int j = i; j < l.size(); j += 3) {
                l[j] = temp[index];
                ++index;
            }
        }
    }
    return l;
}