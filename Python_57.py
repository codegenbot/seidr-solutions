def monotonic(l: list):
    increasing = all(i <= j for i, j in zip(l, l[1:]))
    decreasing = all(i >= j for i, j in zip(l, l[1:]))
    return increasing or decreasing