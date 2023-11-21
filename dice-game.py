n = int(input())
m = int(input())

if n > 1 and m > 1:
    probability = (n - max(n, m) + 1) / n
    print(format(probability, ".8f"))