def monotonic(l: list):
    return all(l[i] >= l[i - 1] for i in range(1, len(l))) or all(
        l[i] <= l[i - 1] for i in range(1, len(l))
    )