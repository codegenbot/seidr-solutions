h0 = float(input())
h1 = float(input())
n = int(input())

bounciness_index = h1 / h0

total_distance = 0
for _ in range(n):
    total_distance += 2 * (h0 + h1)
    h0, h1 = h1, h1 - h0

print(format(bounciness_index, ".3f"))
print(int(total_distance))