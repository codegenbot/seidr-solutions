n = int(input())
m = int(input())
print("{:.2f}".format(sum([(n - i) / n / m for i in range(1, n)]) if n > 1 else 0))