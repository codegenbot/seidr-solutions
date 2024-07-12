n = int(input())
m = int(input())
if n < m:
    print("{:.2f}".format((m - 1) / (n * m)))
else:
    print("{:.2f}".format(m / (n * m)))