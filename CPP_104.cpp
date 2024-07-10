vector<int> result;
    for (int num : x) {
        int digit = num;
        bool hasEvenDigit = false;
        while (digit > 0) {
            int currDigit = digit % 10;
            if (currDigit % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            digit /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}