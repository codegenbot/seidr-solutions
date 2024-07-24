from decimal import Decimal

n = int(input())
m = int(input())
probability = Decimal(sum(1 for i in range(1, n + 1) for j in range(1, m + 1) if i > j)) / Decimal(n * m)
print(round(probability, 8))