long long result = 0;
    for (float num : lst) {
        if (num > 0 && (int)num == num && (int)num % 2 != 0) {
            result += (long long)pow(num, 2);
        }
    }
    return result;
}