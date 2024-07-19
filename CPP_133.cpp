int sum = 0;
    for (float num : lst) {
        int rounded_num = ceil(num);
        sum += rounded_num * rounded_num;
    }
    return sum;
}