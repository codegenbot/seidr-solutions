int sum = 0;
    int prod = 1;
    for (int num : numbers) {
        sum += num;
        prod *= num;
    }
    return {sum, prod};
}