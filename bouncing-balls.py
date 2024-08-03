h0, h1, n = map(float, input().split())
r = h1 / h0
s = h0 + h1
d = h0
for _ in range(n - 1):
    d += s
    s *= r
    d += s
print(d)