h0 = float(input())
hf = float(input())
n = int(input())

bounciness_index = hf / h0

total_distance = 0
for _ in range(n):
    total_distance += bounciness_index
    hf *= bounciness_index

print(total_distance)