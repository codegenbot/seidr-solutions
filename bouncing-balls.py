h0 = float(input())
hf = float(input())
bounces = int(input())

index = hf / h0

distance = 2 * (1 - index**2) ** (bounces + 1) - 1

print(round(distance, 4))