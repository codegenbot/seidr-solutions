h0 = float(input())
h1 = float(input())
bounces = int(input())

bounciness_index = h1 / h0
total_distance = h0 + (h0 * bounciness_index)

for i in range(1, bounces):
    total_distance += 2 * (h0 * bounciness_index)
    bounciness_index *= bounciness_index

print(total_distance)