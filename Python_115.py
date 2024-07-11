```
def max_water(n, m):
    row_values = list(map(int, input(f"Enter {n} row values separated by space: ").split()))
    column_values = list(map(int, input(f"Enter {m} column values separated by space: ").split()))

    grid = [[0] * (m) for _ in range(n)]

    for i in range(1, n):
        for j in range(1, m):
            left_min = min(column_values[:j]) if j > 0 else float("inf")
            right_min = min(column_values[j:]) if j < m - 1 else float("inf")
            top_min = min(row_values[:i]) if i > 0 else float("inf")
            bottom_min = min(row_values[i:]) if i < n - 1 else float("inf")
            grid[i][j] = min(left_min, right_min, top_min, bottom_min)

    total_water = 0
    for i in range(1, n):
        for j in range(1, m):
            width = grid[i][j]
            left_width = j if column_values[j - 1] >= width else 0
            right_width = m - j if column_values[m - j - 1] >= width else 0
            top_width = i if row_values[i - 1] >= width else 0
            bottom_width = n - i if row_values[n - i - 1] >= width else 0

            total_water += min(left_width, right_width, top_width, bottom_width)

    return total_water


print(max_water(int(input("Enter the number of rows: ")), int(input("Enter the number of columns: "))))