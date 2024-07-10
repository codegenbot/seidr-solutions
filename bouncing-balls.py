h0 = float(input())
hf = float(input())
n = int(input())

bi = hf / h0

distance = 2 * (1 + bi) ** n
print(f"{distance:.4f}")