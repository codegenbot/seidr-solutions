h0 = float(input())
h1 = float(input())
n = int(input())

bi = h1 / h0

total_distance = 0
for i in range(n):
    total_distance += bi ** (i + 1)

print(total_distance)