from decimal import Decimal, ROUND_HALF_UP

n = int(input())
m = int(input())
result = Decimal(sum(1 for i in range(1, n + 1) for j in range(1, m + 1) if i > j) / (n * m)).quantize(Decimal('0.00000001'), rounding=ROUND_HALF_UP)
print(result)