h0 = float(input())
h1 = float(input())
n = int(input())

bounciness_index = h1 / h0

distance = 0
height = h0

for _ in range(n):
    distance += height
    height *= bounciness_index

print(format(bounciness_index, ".3f"))
print(int(distance + 0.5))