h0 = float(input())
h1 = float(input())
n = int(input())

bounciness_index = h1 / h0
total_distance = h0 + h1

for _ in range(2, n + 1):
    total_distance += 2 * h1
    h1 *= bounciness_index

print(total_distance)