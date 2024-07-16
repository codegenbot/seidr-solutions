n = int(input())
m = int(input())

win_probability = sum([(n - i) / n / m for i in range(1, n)])

print("{:.2f}".format(win_probability))