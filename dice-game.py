n = int(input())
m = int(input())
print("{:.2f}".format(sum(n > i for i in range(1, m + 1)) / m))