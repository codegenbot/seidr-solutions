n = int(input())
m = int(input())
if n > m:
    print(1 - (m/n))
elif m > n:
    print(m/n)
else:
    print(0.5)