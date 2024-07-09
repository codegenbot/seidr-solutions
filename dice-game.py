import sys

try:
    n, m = map(int, input().split())
except:
    print("Input format is invalid. Please provide two integers separated by space.")
    sys.exit()

from decimal import Decimal

print(
    round(
        sum(1 for i in range(1, n + 1) for j in range(1, m + 1) if i > j)
        / Decimal(n * m),
        8,
    )
)