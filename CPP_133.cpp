int sum = 0;
    for (float num : lst) {
        int ceilNum = ceil(num);
        sum += ceilNum * ceilNum;
    }
    return sum;
}