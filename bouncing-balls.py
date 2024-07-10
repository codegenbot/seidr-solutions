import math

h1 = float(input())
h2 = float(input())
bounciness_index = h2 / h1
num_bounces = int(input())
total_distance = 0
for _ in range(num_bounces):
    total_distance += (h2 - h1) * math.pow(bounciness_index, (_ + 1))
    h1, h2 = h2, h2 * bounciness_index
print(round(total_distance, 4))