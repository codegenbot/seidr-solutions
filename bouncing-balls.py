h0 = float(input())
hb = float(input())
n = int(input())

bi = hb / h0
d = h0

for i in range(n):
    d += 2 * hb
    hb *= bi

print(d)