long long result = 0;
    for (float num : lst) {
        if (num >= 0 && num == (int)num && (int)num % 2 != 0) {
            result += (long long)num * num;
        }
    }
    return result;
}