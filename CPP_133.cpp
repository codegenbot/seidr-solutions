int sum = 0;
    for (float num : lst) {
        sum += pow(ceil(num), 2);
    }
    return sum;
}