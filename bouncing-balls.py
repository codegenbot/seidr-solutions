h0 = float(input())
h1 = float(input())
n = int(input())

bounciness_index = h1 / h0

total_distance = (2 / (h0 + h1)) * ((h0 - h1) ** n)

print(f"{bounciness_index:.4f}")
print(f"{total_distance:.6f}")