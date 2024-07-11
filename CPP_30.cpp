vector<float> res;
    for (const float &num : l) {
        if (num > 0) {
            res.push_back(num);
        }
    }
    return res;