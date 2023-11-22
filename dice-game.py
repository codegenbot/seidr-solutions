n = int(input())
m = int(input())

if n <= 1 or m <= 1:
    print(0.0)
elif n >= m:
    print(0.0)
else:
    print(round((m - n + 1) / m, 8))