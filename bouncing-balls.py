h0 = float(input())
hf = float(input())
n = int(input())

bi = hf / h0
total_distance = bi * (2**n - 1)

print(f"{total_distance:.4f}")