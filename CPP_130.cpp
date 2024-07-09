std::vector<int> tri(int n){
    std::vector<int> result = {1, 3};
    for (int i = 2; i < n; ++i) {
        result.push_back(result[i - 1] + result[i - 2] + result[i - 1]);
    }
    return result;
}