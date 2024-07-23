h0 = float(input())
h1 = float(input())
n = int(input())

bi = h1 / h0
dist = h0 + h1

for i in range(2, n + 1):
    dist += 2 * bi * h1
    bi *= bi

print(dist)