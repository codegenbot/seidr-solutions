h0 = float(input())
hb = float(input())
n = int(input())

bounciness_index = hb / h0
distance = h0 + hb

for _ in range(2, n + 1):
    distance += 2 * hb
    hb *= bounciness_index

print(distance)