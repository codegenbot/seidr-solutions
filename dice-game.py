n = int(input())
m = int(input())
result = 0
for i in range(1, n):
    result += i / n * (m / (n * m))
print("{:.8f}".format(result))