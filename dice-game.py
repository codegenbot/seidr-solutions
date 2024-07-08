try:
    n, m = map(int, input().strip().split())
except ValueError:
    n = m = int(input().strip())

print(
    round(
        sum(1 for i in range(1, n + 1) for j in range(1, m + 1) if i > j) / (n * m), 8
    )
)