```
def max_fill(grid, capacity):
    total_water = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            up = grid[i][j] if i == 0 else grid[i-1][j]
            down = grid[i][j] if i == len(grid) - 1 else grid[i+1][j]
            left = grid[i][j] if j == 0 else grid[i][j-1]
            right = grid[i][j] if j == len(grid[0]) - 1 else grid[i][j+1]

            total_water += min(up, down, left, right) - max(min(up, down), min(left, right)) + 1
    return -(-total_water // capacity)