h0 = float(input())
hf = float(input())
n = int(input())

bi = hf / h0

distance = 0
for _ in range(n):
    distance += 2 * (h0 + hf) ** 0.5
    h0, hf = hf, bi * hf

print(bi)
print(distance)