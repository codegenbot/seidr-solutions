n = int(input())
m = int(input())
print("{:.2f}".format((n-1) / (n * m)) if n <= m else "{:.2f}".format(1/2))