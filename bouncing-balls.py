h0 = float(input())
hf = float(input())
n = int(input())

bounciness_index = hf / h0

distance = 0
height = h0
for _ in range(n):
    distance += 2 * abs(height)
    height *= bounciness_index
print("{:.3f}".format(bounciness_index + distance))