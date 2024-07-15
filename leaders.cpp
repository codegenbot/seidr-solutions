std::vector<int> leaders(std::vector<int>& vec) {
    std::vector<int> result;
    int maxRight = vec.back();
    for (int i = vec.size() - 1; i >= 0; --i) {
        if (vec[i] >= maxRight) {
            result.push_back(vec[i]);
            maxRight = vec[i];
        }
    }
    return result;

}

std::vector<int> result = leaders({5, 690, 325, 768, 314});
for (int num : result) {
    std::cout << num << " ";
}