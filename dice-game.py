n = int(input())
m = int(input())

if n >= m:
    print(round(1 - (n / (n + m)), 2))
else:
    print(round(1 - (m / (n + m)), 2))