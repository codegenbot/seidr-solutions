import statistics


def rounded_avg(n, m):
    if type(n) != int or type(m) != int:
        return "Error: Input must be integers"
    elif n > m:
        return -1
    else:
        avg = int(statistics.mean([n, m]) + 0.5)
        return bin(int(avg))[2:]