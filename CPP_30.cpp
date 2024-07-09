std::vector<std::vector<float>> get_positive(std::vector<std::vector<float>> l){
    std::vector<std::vector<float>> result;
    for (auto &num : l) {
        std::vector<float> temp;
        for (float n : num) {
            if (n > 0) {
                temp.push_back(n);
            }
        }
        if (!temp.empty()) {
            result.push_back(temp);
        }
    }
    return result;