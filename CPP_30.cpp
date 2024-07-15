vector<float> positiveNumbers;
    for (float num : l) {
        if (num > 0) {
            positiveNumbers.push_back(num);
        }
    }
    return positiveNumbers;