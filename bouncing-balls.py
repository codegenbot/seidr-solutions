h0 = float(input())
h1 = float(input())
bi = h1 / h0
n = int(input())

total_distance = 2 * bi * (2**n - 1)
print(total_distance)