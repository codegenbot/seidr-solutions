```
def max_water(n, m):
    print("Enter", n, "row values separated by space:")
    row_values = list(map(int, input().split()))
    print("Enter", m, "column values separated by space:")
    column_values = list(map(int, input().split()))

    grid = [[0] * (m) for _ in range(n)]

    for i in range(n):
        for j in range(m):
            left_min = min(column_values[: j + 1]) if j > 0 else float("inf")
            right_min = min(column_values[j:]) if j < m - 1 else float("inf")
            top_min = min(row_values[: i + 1]) if i > 0 else float("inf")
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


n = int(input("Enter the number of rows: ")) or -1
m = int(input("Enter the number of columns: ")) or -1

while n <= 0 or m <= 0:
    print("Invalid input! Please enter positive integers.")
    try:
        n = int(input("Enter the number of rows: "))
        m = int(input("Enter the number of columns: "))
    except ValueError:
        pass

print(max_water(n, m))