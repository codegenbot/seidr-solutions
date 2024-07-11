n = int(input())
grid = [[int(x) for x in input().split()] for _ in range(n)]
total_water = sum(
    min(row[i], row[:i].count(capacity), row[i + 1 :].count(capacity))
    for row in grid
    for i, capacity in enumerate(row)
)