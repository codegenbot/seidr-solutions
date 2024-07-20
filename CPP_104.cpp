vector<int> result;
    for (int elem : x) {
        int temp = elem;
        bool hasEvenDigit = false;
        while (temp > 0) {
            if (temp % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(elem);
        }
    }
    sort(result.begin(), result.end());
    return result;
}