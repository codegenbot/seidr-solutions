vector<int> result = l;
    for (int i = 0; i < result.size(); i += 3) {
        sort(result.begin() + i, result.begin() + i + 3);
    }
    return result;
}