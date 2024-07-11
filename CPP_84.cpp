int sum = 0;
    while (N) {
        sum += N % 2;
        N /= 2;
    }
    return to_string(sum);
}