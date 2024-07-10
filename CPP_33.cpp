vector<int> result = l;
    for (int i = 2; i < l.size(); i += 3) {
        sort(result.begin() + i - 2, result.begin() + i + 1);
    }
    return result;
}