n = int(input())
m = int(input())

if n > m:
    print(0.5)
else:
    print(round((m - n) / (2 * m), 2))