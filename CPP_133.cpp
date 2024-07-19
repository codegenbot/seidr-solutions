int sum = 0;
    for (float num : lst) {
        int rounded = ceil(num);
        sum += rounded * rounded;
    }
    return sum;
}