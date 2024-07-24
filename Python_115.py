def max_fill(grid, capacity):
    total_water = 0
    for i in range(len(grid)):
        min_height = float('inf')
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                min_height = min(min_height, grid[i][j])
                total_water += min_height
    return (total_water // capacity) + (1 if total_water % capacity > 0 else 0)

grid = [[0, 0, 1], [1, 1, 1], [2, 0, 0]]
capacity = 3

max_value = max_fill(grid, capacity)
print(max_value)