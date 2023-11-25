h0 = float(input())
h1 = float(input())
n = int(input())

bi = h1 / h0
d = h0

for i in range(n):
    d += 2 * h1
    h1 *= bi

print(d)