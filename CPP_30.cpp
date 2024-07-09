vector<float> positive_nums;
    for (float num : l) {
        if (num > 0) {
            positive_nums.push_back(num);
        }
    }
    return positive_nums;