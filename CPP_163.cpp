vector<int> result;
    for (int i = a; i <= b; ++i) {
        int num = i;
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                result.push_back(i);
                break;
            }
            num /= 10;
        }
    }
    return result;
}