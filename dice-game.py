n = int(input())
m = int(input())

if n > m:
    print(0.5)
elif n < m:
    print(1 - (n / m))
else:
    print(0.0)