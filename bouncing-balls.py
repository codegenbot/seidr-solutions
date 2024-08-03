h0 = float(input())
hf1 = float(input())
bf1 = hf1 / h0
n = int(input())

total_distance = 0.0
for i in range(n):
    total_distance += (2 ** (i + 1)) * bf1

print("{:.3f}".format(total_distance))