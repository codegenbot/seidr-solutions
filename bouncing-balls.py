h0 = float(input())
hf1 = float(input())
bounces = int(input())

bi = hf1 / h0
distance = 2 * (1 - math.pow(bi, -bounces)) * h0

print(f"{distance:.4f}")