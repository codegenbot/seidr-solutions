n = int(input())
m = int(input())
if n > m:
    probability = sum((i / n) * ((m - i) / m) for i in range(1, n))
    print(round(probability, 8))
elif m > n:
    print(round(n / m, 8))
else:
    print(0.5)