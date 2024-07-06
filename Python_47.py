def median(l: list):
    sorted_l = sorted(l)
    n = len(sorted_l)
    if n % 2 == 1:
        return sorted_l[n // 2]
    else:
        return (sorted_l[n // 2 - 1] + sorted_l[n // 2]) / 2