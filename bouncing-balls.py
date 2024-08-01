h0 = float(input())
hf = float(input())
n = int(input())

bi = hf / h0

distance = 0
for _ in range(n):
    distance += bi * (2 ** (_ + 1) - 1)

print(round(distance, 6))