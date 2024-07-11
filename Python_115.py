grid = [["W" for _ in range(5)] for _ in range(5)]
capacity = "W"
total_water = sum(
    min(row[i], row[:i].count(capacity), row[i + 1 :].count(capacity))
    for row in grid
    for i in range(len(row))
)