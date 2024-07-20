vector<int> result = l;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            int start = i;
            int end = i + 2;
            sort(result.begin() + start, result.begin() + end + 1);
        }
    }
    return result;
}