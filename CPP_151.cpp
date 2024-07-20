long long sum = 0;
    for (auto num : lst) {
        if (num > 0 && floor(num) == num && (int)num % 2 != 0) {
            sum += num * num;
        }
    }
    return sum;
}