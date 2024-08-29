def luhn(n):
    n = list(map(int, input().split()))
    total = 0
    for i in range(len(n)):
        if (i % 2) == 1:
            n[i] *= 2
            if n[i] > 9:
                n[i] -= 9
        total += n[i]
    return str(total)