s, h, n = map(float, input().split())
b = h / s
d = s + h

for i in range(n - 1):
    h = b * s
    d += 2 * h
    b = h / s

print("{:.12f}".format(d))