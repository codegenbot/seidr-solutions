h0 = float(input())
h1 = float(input())
n = int(input())
bounciness_index = h1 / h0
total_distance = h0 + h1 + 2 * h1 * sum([bounciness_index**i for i in range(1, n)])
print(total_distance)