h = float(input())
b1 = float(input())
bi = b1 / h

n = int(input())

distance = 0
for i in range(1, n + 1):
    distance += (2**i) * bi - 1
print(f"{distance:.4f}")