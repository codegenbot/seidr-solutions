n = int(input())
m = int(input())

if n <= 1 or m <= 1:
    print(0.0)
else:
    probability = (n - 1) / (n + m - 2)
    print(format(probability, ".8f"))