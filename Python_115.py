capacity = int(input())
n = int(input())
grid = [[int(x) for x in input().split()] for _ in range(n)]
total_water = sum(
    min(
        row[i],
        max(
            column[0] if i == 0 else row[i - 1][j],
            column[-1] if i == n - 1 else row[i + 1][j],
        ),
    )
    for row in grid
    for j, i in enumerate(range(len(row)))
) * (capacity or 1)