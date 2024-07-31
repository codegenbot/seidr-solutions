int total = 0;
    for (auto num : lst) {
        total += ceil(num) * ceil(num);
    }
    return total;
}