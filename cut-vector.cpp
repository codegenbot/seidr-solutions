std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> v) {
    int i = 0;
    for (; i <= v.size() - 1; i++) {
        if (i > 0 && v[i] != v[0]) {
            break;
        }
    }
    std::pair<std::vector<int>, std::vector<int>> res(std::vector<int>(v.begin(), v.begin()), std::vector<int>());
    for (int j = 0; j < i; j++) {
        res.first.push_back(v[j]);
    }
    for (int j = i; j < v.size(); j++) {
        res.second.push_back(v[j]);
    }
    return res;
}