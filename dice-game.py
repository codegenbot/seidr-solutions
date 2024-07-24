n = int(input())
m = int(input())

if n > m:
    print(0.5)
else:
    print(round((m - 1) / (2 * m), 2))