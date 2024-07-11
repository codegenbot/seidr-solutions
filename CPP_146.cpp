int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (abs(num) % 10) % 2 != 0 && abs(num) / pow(10, (int)log10(abs(num))) % 2 != 0) {
            count++;
        }
    }
    return count;
}