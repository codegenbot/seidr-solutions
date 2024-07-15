h0, h1, n = map(float, input().split())
r = h1 / h0
d = h0 + h1
for i in range(1, n):
    d += h0 * r**i * 2
print(d)