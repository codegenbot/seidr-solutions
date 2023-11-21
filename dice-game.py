n = int(input())
m = int(input())

if n <= 1 or m <= 1:
    print(0.0)
else:
    probability = 1 - (n - 1) / (n * n)
    print(probability)