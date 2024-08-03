h0 = float(input())
hf1 = float(input())
n = int(input())

bi = hf1 / h0

distance = bi * (2**n - 1) * h0
print(distance)