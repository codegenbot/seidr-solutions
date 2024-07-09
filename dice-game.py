from decimal import Decimal

n, m = map(int, input().split())
print(
    round(
        sum(1 for i in range(1, n + 1) for j in range(1, m + 1) if i > j)
        / Decimal(n * m),
        8,
    )
)