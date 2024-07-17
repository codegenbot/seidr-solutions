h0 = float(input())
hf = float(input())
n = int(input())

bi = hf / h0

total_distance = 0
for i in range(1, n + 1):
    total_distance += bi**i

print(total_distance)