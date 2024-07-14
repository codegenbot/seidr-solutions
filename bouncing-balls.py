h0 = float(input())
h1 = float(input())
bounces = int(input())

bi = h1 / h0

distance = 0
for _ in range(bounces):
    distance += bi * (2 ** (_ + 1))

print(f"{distance:.4f}")