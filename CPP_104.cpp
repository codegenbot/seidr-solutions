vector<int> result;
    for (int num : x) {
        int copy = num;
        bool hasEvenDigit = false;
        while (copy > 0) {
            int digit = copy % 10;
            if (digit % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            copy /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}