n = int(input())
m = int(input())
print(
    round(
        sum(1 for p in range(1, n + 1) for c in range(1, m + 1) if p > c) / (n * m), 2
    )
)