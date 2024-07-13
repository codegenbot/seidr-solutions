s, h, n = map(float, input().split())
b = h / s
d = 0
for _ in range(int(n)):
    d += s + h
    h *= b
print("{:.15f}".format(d))