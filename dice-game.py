n = int(input())
m = int(input())

if n <= 1 or m <= 1:
    print(0.0)
elif n > m:
    print(1.0)
else:
    probability = (m - n + 1) / m
    print(round(probability, 8))