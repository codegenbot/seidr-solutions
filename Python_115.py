```
rows = int(input("Enter the number of rows: "))
cols = int(input("Enter the number of columns: "))
grid = []
for _ in range(rows):
    row = list(map(int, input(f"Enter heights for each column (space separated): ").split()))
    grid.append(row)
capacity = int(input("Enter the capacity: "))

def max_fill(grid, capacity):
    total_water = 0
    left = 0
    right = len(grid[0]) - 1
    while right > left:
        min_height_left = min(grid[i][left] for i in range(rows))
        min_height_right = min(grid[i][right] for i in range(rows))
        water_level = min(min_height_left, min_height_right, capacity)
        total_water += water_level * (right - left + 1)
        if min_height_left < min_height_right:
            left += 1
        else:
            right -= 1
    return total_water

print(max_fill(grid, capacity))