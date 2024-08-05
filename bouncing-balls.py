h0 = float(input())
hf = float(input())
n = int(input())

bi = hf / h0

total_distance = 0
for _ in range(n):
    total_distance += 2 * abs(hf - h0)
    h0, hf = hf, hf - bi * h0

print(bi)
print(total_distance)