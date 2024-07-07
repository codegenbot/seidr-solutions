h0 = float(input())
h1 = float(input())
n = int(input())

bounciness_index = h1 / h0

total_distance = 0
height = h1

for _ in range(n):
    total_distance += height
    height *= bounciness_index

print(format(total_distance, ".4f"))