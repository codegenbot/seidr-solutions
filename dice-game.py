n = int(input())
m = int(input())

if n <= 1 or m <= 1:
    print(0.0)
elif n >= m:
    probability = round((n - (m - 1)) / (n * 1.0), 8)
    print(probability)
else:
    probability = round((m - n + 1) / (m * 1.0), 8)
    print(probability)