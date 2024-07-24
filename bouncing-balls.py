h0 = float(input())
h1 = float(input())
n = int(input())

bounciness_index = h1 / h0

distance = 0
for _ in range(n):
    distance += 2 * (h0 + h1)
    h0, h1 = h1, 2 * h1 - h0

print(bounciness_index)
print(distance)