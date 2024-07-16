vector<float> positive_nums;
    for (const auto &num : l) {
        if (num > 0) {
            positive_nums.push_back(num);
        }
    }
    return positive_nums;