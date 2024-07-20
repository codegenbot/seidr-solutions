int count = 0;
    for (int num : n) {
        int sumDigits = 0;
        int tempNum = abs(num);
        while (tempNum != 0) {
            sumDigits += tempNum % 10;
            tempNum /= 10;
        }
        if (sumDigits > 0) {
            count++;
        }
    }
    return count;
}