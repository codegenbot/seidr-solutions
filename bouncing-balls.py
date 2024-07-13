h0, h1, n = map(float, input().split())
b = h1 / h0
s = h0 + 2 * h0 * (1 - b**n) / (1 - b)
print(s)