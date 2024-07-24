if (num < 0) {
    int sum = 0;
    int abs_num = -num; 
    while (abs_num > 0) {
        sum += abs_num % 10;
        abs_num /= 10;
    }
    if (sum > 0) {
        count++;
    }
}