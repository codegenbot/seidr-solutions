vector<int> result = l;

    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            vector<int> temp = { l[i - 2], l[i - 1], l[i] };
            sort(temp.begin(), temp.end());
            result[i - 2] = temp[0];
            result[i - 1] = temp[1];
            result[i] = temp[2];
        }
    }

    return result;
}