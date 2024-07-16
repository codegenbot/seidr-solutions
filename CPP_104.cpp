vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int tempNum = num;
        while (tempNum > 0) {
            if (tempNum % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            tempNum /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}