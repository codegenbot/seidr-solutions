h0 = float(input())
h1 = float(input())
n = int(input())

bounciness_index = h1 / h0
total_distance = h0 + h0 * (1 - bounciness_index**n) / (1 - bounciness_index)

print(total_distance)