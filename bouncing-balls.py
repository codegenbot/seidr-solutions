h0 = float(input())
hf = float(input())
n = int(input())

bi = hf / h0

total_distance = 0
for _ in range(n):
    total_distance += bi * (2**0.5)
    bi *= 1 - ((h0 - hf) / h0) ** 2

print(round(total_distance, 4))