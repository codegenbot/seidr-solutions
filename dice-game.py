n = int(input())
m = int(input())

if n <= 1 or m <= 1:
    print(0.0)
else:
    probability = sum((i/n) * ((m-1) / m) for i in range(1, n+1))
    print(round(probability, 8))