def digit_sum(n):
    s = str(n)
    sum = 0
    for c in s:
        sum += int(c)
    return sum